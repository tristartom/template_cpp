SRCDIR = src
DEBUG_FLAG = -O0 -g
FLAG = -std=c++0x

_SRC = main.cpp lib.cpp
SRC = $(patsubst %,$(SRCDIR)/%,$(_SRC))
all :
	g++ $(FLAG) $(SRC) -o bin/a.out

0 : all

