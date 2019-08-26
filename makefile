main: main.o Barrier.o Chicane.o Decorator.o FlagObserver.o GravelTrap.o Observer.o Pitstop.o Section.o Startline.o Straight.o Track.o Turn.o
	g++ -o main main.o Barrier.cpp Chicane.cpp Decorator.cpp FlagObserver.cpp GravelTrap.cpp Observer.cpp Pitstop.cpp Section.cpp Startline.cpp Straight.cpp Track.cpp Turn.cpp

main.o: main.cpp Track.h Section.h Straight.h Barrier.h
	g++ -c main.cpp

Barrier.o: Barrier.h Barrier.cpp
	g++ -c Barrier.cpp
	
Chicane.o: Chicane.h Chicane.cpp
	g++ -c Chicane.cpp
	
Decorator.o: Decorator.h Decorator.cpp
	g++ -c Decorator.cpp

FlagObserver.o: FlagObserver.h FlagObserver.cpp
	g++ -c FlagObserver.cpp
	
GravelTrap.o: GravelTrap.h GravelTrap.cpp
	g++ -c GravelTrap.cpp
	
Observer.o: Observer.h Observer.cpp
	g++ -c Observer.cpp
	
Pitstop.o: Pitstop.h Pitstop.cpp
	g++ -c Pitstop.cpp
	
Section.o: Section.h Section.cpp
	g++ -c Section.cpp

Startline.o: Startline.h Startline.cpp
	g++ -c Startline.cpp
	
Straight.o: Straight.h Straight.cpp
	g++ -c Straight.cpp
	
Track.o: Track.h Track.cpp
	g++ -c Track.cpp
	
Turn.o: Turn.h Turn.cpp
	g++ -c Turn.cpp

run:
	./main

clean:
	rm *.o main