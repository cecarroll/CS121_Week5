#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS


class Horse {
	private:
	    const static int NUM_HORSES = 5;
		int position;
		int id;
		int trackLength;
	public:
		Horse();
		void init(int horseLabel, int trackLength);
		bool isWinner(Horse horse);
		void advance();
		void printLane();
		int getPosition();
		int getID();
		int getTrackLength();
		void setPosition(int position);
};

#endif
