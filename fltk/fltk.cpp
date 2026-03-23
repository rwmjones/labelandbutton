#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Menu_Bar.H>

static void
menu_callback (Fl_Widget *w, void *)
{
  Fl_Menu_Bar *bar = (Fl_Menu_Bar*) w;
  const Fl_Menu_Item *item = bar->mvalue ();
  if (strcmp (item->label (), "&Quit") == 0)
    exit (EXIT_SUCCESS);
}

int
main (int argc, char **argv)
{
  Fl_Window *win = new Fl_Window (400, 200, "menubar-simple");
  Fl_Menu_Bar *menu = new Fl_Menu_Bar (0, 0, 400, 25);
  menu->add ("&File/&Quit", "^q", menu_callback);
  win->end();
  win->show (argc, argv);
  return Fl::run();
}
