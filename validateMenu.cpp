/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/27/2019
** Description:  The validateMenu function takes in a reference to an int and checks
** that it is between certain values. 
*******************************************************************************/



#include "validateMenu.h"
#include <iostream>

void validateMenu(int &i)
{
	
		while (!std::cin || (i < 1 || i > 2))
		{
			std::cin.clear();
			std::cin.sync();
			std::cin.ignore();
			std::cout << "\nInvalid input! Try again: ";
			std::cin >> i;
		}

	
}