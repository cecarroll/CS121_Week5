#include <iostream>
#include <ctime>
#include "horse.h"
#include "race.h"



int main(){
	std::cout << "Hello World.! :)" << std::endl;
	std::srand(std::time(NULL));
	
	Race race;
	race.start();
	
	/*horse.init(2, 15);
	
	horse2.init(3,15);
	int a = std::cin.get();

	std::cout << horse.getPosition() << std::endl; 
	std::cout << horse2.getPosition() << std::endl; 
	std::cout  << std::endl; 
	*/
	
	
	return 0;
};
