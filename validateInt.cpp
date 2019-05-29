/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/27/2019
** Description:  The validateInt function takes in a reference to an int
** and checks that it's between 1 and 100; 
*******************************************************************************/


#include "validateInt.h"
#include <iostream>

void validateInt(int &i)
{
	while (!std::cin || (i < 1 || i > 100))
	{
		std::cin.clear(); 
		std::cin.sync(); 
		std::cin.ignore(); 
		std::cout << "\nInvalid input! Try again: "; 
		std::cin >> i; 
	}

}