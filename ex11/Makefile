ex11: ex11.o Vector.o
	g++ -g -Wall -std=c++11 -o ex11 ex11.o Vector.o

ex11.o: ex11.cc Vector.h
	g++ -g -Wall -std=c++11 -c ex11.cc

Vector.o: Vector.cc Vector.h
	g++ -g -Wall -std=c++11 -c Vector.cc

clean:
	rm -rf ex11 *.o *~ *.dSYM