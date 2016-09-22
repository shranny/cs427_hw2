# Author: Ran Bai
# Date: September 21 2016

#-----------------------------------------------------------
# Macro definitions
CXXFLAGS = -O1 -g -Wall -std=c++14
OBJ = thingadot.o main.o game.o tools.o
TARGET = tad
#-----------------------------------------------------------
# Rules
all: $(TARGET)
$(TARGET): $(OBJ)
	$(CXX) -o $@ $(OBJ)
clean:
	rm -f $(OBJ) $(TARGET)
#-----------------------------------------------------------
# Dependencies
thingadot.o: thingadot.cpp thingadot.hpp tools.hpp
main.o: main.cpp tools.hpp thingadot.hpp game.hpp
game.o: game.cpp game.hpp thingadot.hpp tools.hpp
tools.o: tools.cpp tools.hpp