ex10: ex10.o Vector.o
	g++ -g -Wall -std=c++11 -o ex10 ex10.o Vector.o

ex10.o: ex10.cc Vector.h
	g++ -g -Wall -std=c++11 -c ex10.cc

Vector.o: Vector.cc Vector.h
	g++ -g -Wall -std=c++11 -c Vector.cc

clean:
	rm -rf ex10 *.o *.~ ex10