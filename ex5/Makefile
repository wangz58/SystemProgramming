# Copyright 2017 Zhixing Wang
# 1333101
# wangz58@cs.washington.edu
# 04/10/2017

CC = gcc
CFLAGS = -Wall -g -std=c11

ex5: ex5.o Vector.o
	$(CC) $(CFLAGS) -o ex5 ex5.o Vector.o

ex5.o: ex5.c Vector.h
	$(CC) $(CFLAGS) -c ex5.c

Vector.o: Vector.c Vector.h
	$(CC) $(CFLAGS) -c Vector.c

clean:
	rm -f *.o *~ ex5