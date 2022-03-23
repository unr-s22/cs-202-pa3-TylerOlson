all: main.o Money.o Account.o
	g++ main.o Money.o Account.o -o pa3
	make cleanbin

main.o: main.cpp
	g++ -g -c main.cpp

Money.o: Money.cpp Money.h
	g++ -g -c Money.cpp

Account.o: Account.cpp Account.h
	g++ -g -c Account.cpp

clean: cleanbin
	rm pa3

cleanbin:
	rm *.o