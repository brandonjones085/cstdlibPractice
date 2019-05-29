/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/19/2019
** Description:  The menu function asks for user input and returns and int
** according to what the user would like to accomplish. 
*******************************************************************************/


#include "menu.h"
#include "validateMenu.h"

#include <iostream>



int menu()
{
	int num; 
	std::cout << " Welcome\n";
	std::cout << " Would you like to...\n"; 
	std::cout << " 1. Test the buffer\n";
	std::cout << " 2. Test the stack\n"; 
	std::cin >> num; 

	validateMenu(num); 

	return num;
}

