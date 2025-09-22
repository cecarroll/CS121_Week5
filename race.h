#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS


#include "horse.h"

class Race {
	private:
		static const int NUM_HORSES = 5;
		const int TRACK_LENGTH = 15;
		bool keepGoing;
		Horse roster[NUM_HORSES];
	public:
		Race();
		int getNUM_HORSES();
		int getTRACK_LENGTH();
		int getKeepGoing();
		void setKeepGoing(bool);
		void start();
};


#endif
