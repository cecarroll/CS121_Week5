#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS


#include "horse.h"

class Race {
	private:
		const int NUM_HORSES = 5;
		const int TRACK_LENGTH = 15;

	public:
		Race();
		void start();
}


#endif
