CXX	 := g++
CXXFLAGS := -Wall -g -O2 $(shell wx-config --cflags )
LIBS	 := $(shell wx-config --libs )

linux: wx-linux

wx-linux: wx.o
	$(CXX) $(CXXFLAGS) $< $(LIBS) -o $@

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

MINGWCXX := x86_64-w64-mingw32-g++
#MINGWWXCONFIG := /usr/x86_64-w64-mingw32/sys-root/mingw/bin/wx-config
MINGWWXCONFIG := /usr/x86_64-w64-mingw32/sys-root/mingw/bin/wx-config-3.0
MINGWCXXFLAGS := -Wall -g -O2 $(shell $(MINGWWXCONFIG) --cflags )
#MINGWCXXFLAGS := -Wall -g -O2 $(shell $(MINGWWXCONFIG) --cflags ) -static
MINGWLIBS := $(shell $(MINGWWXCONFIG) --libs )

windows: wx-windows.exe

wx-windows.exe: wx-windows.obj
	$(MINGWCXX) $(MINGWCXXFLAGS) $< $(MINGWLIBS) -o $@

wx-windows.obj: wx.cpp
	$(MINGWCXX) $(MINGWCXXFLAGS) -c $< -o $@

clean:
	rm -f wx-linux wx-windows.exe *.o *.obj
