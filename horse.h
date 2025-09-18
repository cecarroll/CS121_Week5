#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

class Horse {
	private:
		int position;
		int id;
		int trackLength;
	public:
		Horse();
		init(int horseLabel, int trackLength);
		bool isWinner();
		void advance();
		void printLane();		
}


#endif
