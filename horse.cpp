#include <string> 
#include <iostream>
#include <ctime>
#include "horse.h"


Horse::Horse(){
	Horse::position = 0;
}


void Horse::init(int horseLabel, int trackLength){
	Horse::id = horseLabel;
	Horse::trackLength = trackLength;
}

int Horse::getID(){
	return id;
}

int Horse::getTrackLength(){
	return trackLength;
}
int Horse::getPosition(){
	return position;
}
void Horse::setPosition(int position){
	Horse::position = position;
}

void Horse::printLane(){
  
  for (int i = 0 ; i < trackLength ; i++){
    if ( i == position){
      std::cout<< id; 
    }
    else{
      std::cout << ".";
    }
  }
  std::cout << std:: endl;
}

void Horse::advance() {
  int movement = std::rand() % 2;
  int newposition = position + movement;
  position = newposition;
}//end advance
bool Horse::isWinner(){
    bool keepGoing;
    if(position>= trackLength){
        std::cout << "Horse " << id << " has won!" << std::endl;
        keepGoing = false;
    }else{
        keepGoing = true;
      
    }
    return keepGoing;
}

