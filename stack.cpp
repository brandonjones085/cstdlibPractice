/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/27/2019
** Description:  The stack function takes in a string as user input and
** returns the palindrome of the string
*******************************************************************************/

#include "stack.h"
#include "validateString.h"

#include <stack>
#include <iostream>
#include <string>

void stack()
{
	//USER INPUT
	std::string input = " "; 
	std::cout << "Enter a string: ";
	std::cin >> input; 
	validateString(input); 

	//creates the stack
	std::stack<char> charStack; 

	//Puts the letters into the stack
	for (char l : input)
	{
		charStack.push(l); 
	}


	//OUTPUT
	std::cout << "Output: " << input << std::endl;
	std::cout << "Palindrome: ";

	//moves letters out of stack
	while (!charStack.empty())
	{
		std::cout << charStack.top(); 
		charStack.pop(); 
	}

	std::cout << std::endl <<std::endl; 




	
}
