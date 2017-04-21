ex9: ex9.o IntPair.o
	g++ -Wall -std=c++11 -g -o ex9 ex9.o IntPair.o

ex9.o: ex9.cc IntPair.h
	g++ -Wall -std=c++11 -g -c ex9.o ex9.cc

IntPair.o: IntPair.cc IntPair.h
	g++ -Wall -std=c++11 -g -c IntPair.o IntPair.cc

clean:
	rm -rf ex9 *.o *.~ ex9.dSYM
