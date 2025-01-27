CC = g++
CFLAGS = -Wall -g

all: main

main: main.o arrays.o TicTacToe.o
	$(CC) $(CFLAGS) -o main.exe main.o arrays.o TicTacToe.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

arrays.o: arrays.cpp
	$(CC) $(CFLAGS) -c arrays.cpp

TicTacToe.o: TicTacToe.cpp
	$(CC) $(CFLAGS) -c TicTacToe.cpp

clean:
	del /q *.o main.exe