CC = g++

all: hw09

hw09: shape.o circle.o triangle.o rectangle.o hw09.cpp
	$(CC) hw09.cpp -o hw09 shape.o circle.o triangle.o rectangle.o

shape.o: shape.cpp shape.h
	$(CC) -c shape.cpp -o shape.o

circle.o: circle.cpp circle.h
	$(CC) -c circle.cpp -o circle.o

triangle.o: triangle.cpp triangle.h
	$(CC) -c triangle.cpp -o triangle.o

rectangle.o: rectangle.cpp rectangle.h
	$(CC) -c rectangle.cpp -o rectangle.o

clean: 
	rm hw09 *.o

tar:
	tar cf hw09.tar hw09.scr Makefile hw09.cpp circle.h shape.h triangle.h rectangle.h shape.cpp circle.cpp triangle.cpp rectangle.cpp 
