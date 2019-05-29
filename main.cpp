/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/27/2019
** Description:  The main file for the program
*******************************************************************************/

#include "menu.h"
#include "Queue.h"
#include "stack.h"

#include <iostream>
#include <queue>

int main()
{
	int num = menu(); 

	while (num == 1 || num == 2)
	{


		if (num == 1)
		{
			//run queue 
			queue();
			num = menu(); 

		}
		else
		{
			//runs stack
			stack();
			num = menu(); 
		}

	}

	

}

