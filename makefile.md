
game: main.o horse.o race.o 
    g++ -Wall -g main.o -o game

horse.o: horse.h horse.cpp
    g++ -c horse.cpp

race.o: race.cpp race.h horse.h
    g++ -c race.cpp

main.o: main.cpp horse.h race.h
    g++ -c main.cpp

clean:
    rm -f *.o
    rm game
run: game
    ./game



     


