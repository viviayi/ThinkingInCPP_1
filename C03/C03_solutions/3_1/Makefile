CPP = g++
OFLAG = -o

# build .o from .cpp

.SUFFIXES:	.o .cpp .h
.h.cpp.o:
		$(CPP) $(CPPFLAGS) $(HFLAGS) $<


3_1_main: 3_1_main.o 3_1.o
		$(CPP) $(OFLAG) 3_1_main 3_1_main.o 3_1.o

3_1_main.o: 3_1_main.cpp 3_1.h
3_1.o: 3_1.cpp 3_1.h