#include <string> 
#include "horse.h"


Horse::Horse(){
	Horse::position = 0;
}


Horse Horse::init(int horseLabelIn, int trackLengthIn){
	Horse::id = horseLabelIn;
	Horse::trackLength = trackLengthIn;
}

