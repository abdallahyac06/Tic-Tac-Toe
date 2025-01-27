CC = g++
CFLAGS = -Wall -g

all: main

main: main.o TicTacToe.o arrays.o
	$(CC) $(CFLAGS) -o main.out main.o TicTacToe.o arrays.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

TicTacToe.o: TicTacToe.cpp
	$(CC) $(CFLAGS) -c TicTacToe.cpp

arrays.o: arrays.cpp
	$(CC) $(CFLAGS) -c arrays.cpp

clean:
	rm -f *.o main.out
