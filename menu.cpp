#include "menu.h"
#include "validateInt.h"

#include <iostream>



int menu()
{
	int num; 
	std::cout << " Welcome\n";
	std::cout << " Would you like to...\n"; 
	std::cout << " 1. Test the buffer\n";
	std::cin >> num; 

	//validateInt(num); 

	return num;
}

