main.cpp: main.o horse.o race.o 

game: main.o horse.o race.o 
    g++ -Wall -g main.o -o game

main.o:

horse.o: race.o
     


