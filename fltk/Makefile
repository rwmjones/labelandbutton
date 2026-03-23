CXX	 := g++
CXXFLAGS := -Wall -g -O2
LIBS	 := -lfltk

linux: fltk-linux

fltk-linux: fltk.o
	$(CXX) $(CXXFLAGS) fltk.o $(LIBS) -o $@

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@
