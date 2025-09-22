
game: main.o horse.o race.o 
	g++ -Wall -g main.o horse.o race.o -o game

main.o: horse.h race.h main.cpp
	g++ -c main.cpp

horse.o: horse.h horse.cpp
	g++ -c horse.cpp

race.o:  race.h horse.h race.cpp
	g++ -c race.cpp

clean:
	rm -f *.o
	rm game
run: game
	./game
