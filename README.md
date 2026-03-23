Related to this Hacker News thread:
https://news.ycombinator.com/item?id=47475938

How can we create a Windows user interface for a simple application?
In this test we create just a label and a button.  The real
application won't be much more complicated than this.

Requirements:

* Must be developed and built using entirely open source software.

* Must build to a single Windows executable (`.exe`), with no runtime,
  DLLs, language, installer etc.

* Must look and behave like a native Windows application.

* Works with Windows >= 7, 32 and 64 bit, and likely to continue to
  work in future.

Optional:

* Smaller executables are better.

* Ideally can be cross-compiled from Linux.

* Lots of information available on the web or in books.  No obscure
  languages or frameworks.

## fltk

Rejected, doesn't use the native look and feel.

## Qt6

Not simple to get Linux working, but did work in the end.

I could NOT get Windows cross-compilation working, and didn't feel
like installing the entire Qt toolchain on Windows.

## wxWidgets

Native look and feel.  Cross-platform just worked.

Dynamic version required quite a number of libraries on Windows.

I didn't manage to compile a static version.
