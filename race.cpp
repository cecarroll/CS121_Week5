#include <string> 
#include <iostream>
#include "horse.h"
#include "race.h"

Race::Race(){
	Horse roster[NUM_HORSES];
	keepGoing = true;
}

int Race::getNUM_HORSES(){
	return NUM_HORSES;
}

int Race::getTRACK_LENGTH(){
	return TRACK_LENGTH;
}
int Race::getKeepGoing(){
	return keepGoing;
}
void Race::setKeepGoing(bool keepGoing){
	Race::keepGoing = keepGoing;
}

void Race::start(){
	for (int i = 0; i < NUM_HORSES; i++) {
        roster[i].init(i, TRACK_LENGTH);
    }
	std::cout << "press enter to advance the horses" << std::endl;
	while(keepGoing == true){
		std::cin.ignore();
		for (int i = 0; i < NUM_HORSES; i++) {
			roster[i].advance();
        	roster[i].printLane();
			if(roster[i].isWinner() == false){
				keepGoing = false;
			}
		}	
	}
}

