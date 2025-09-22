#include <string> 
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



