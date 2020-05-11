CPP = g++
OFLAG = -o

all: \
		3_34

3_34: 3_34.o
		$(CPP) $(OFLAG) 3_34 3_34.o

3_34.o: 3_34.cpp
		$(CPP) $(CPPFLAGS) -c $<

debug: \
		3_34_debug

3_34_debug: 3_34_debug.o
		$(CPP) $(OFLAG) 3_34_debug 3_34_debug.o

3_34_debug.o: 3_34.cpp
		$(CPP) -DDEBUG $(CPPFLAGS) $(OFLAG) 3_34_debug.o -c $<