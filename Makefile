# define a target for the application
#
all: p01.exe
#
p01.exe: p01.cc p01.cpp
	g++ -g -O2 -lm p01.cc p01.cpp -o p01.exe
#
p01.o: p01.cc p01.h
	g++ -O2 -c p01.cc -o p01.o
#
clean:
	rm -f p01.o p01.exe
#
# end of file
