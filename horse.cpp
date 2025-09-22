#include <string> 
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
/* 
void printLane(Horse horse){
  int id = horse.getID();
  for (int i = 0 ; i < horse.getTrackLength() ; i++){
    if ( i == horse.getPosition()){
      std::cout<< id; 
    }
    else{
      std::cout << ".";
    }
  }
  std::cout << std:: endl;
}
*/