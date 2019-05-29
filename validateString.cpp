/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/27/2019
** Description:  Takes in a reference to a string and validates the input
** is a string
*******************************************************************************/


#include "validateString.h"

#include <iostream>
#include <string>

void validateString(std::string &s)
{
	while (!std::cin)
	{
		std::cin.clear();
		std::cin.sync();
		std::cin.ignore();
		std::cout << "\nInvalid input! Try again: ";
		std::cin >> s;
	}
}