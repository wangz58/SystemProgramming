ex9: ex9.o IntPair.o
	g++ -g -Wall -std=c++11 -o ex9 ex9.o IntPair.o

ex9.o: ex9.cc IntPair.h
	g++ -g -Wall -std=c++11 -c ex9.cc

IntPair.o: IntPair.cc IntPair.h
	g++ -g -Wall -std=c++11 -c IntPair.cc

clean:
	rm -rf ex9 *.o *.~ ex9.dSYM
