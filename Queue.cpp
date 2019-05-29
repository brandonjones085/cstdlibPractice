/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/27/2019
** Description:  The queue function 

**Source: https://www.geeksforgeeks.org/queuepush-and-queuepop-in-cpp-stl/
*******************************************************************************/


#include "Queue.h"
#include "validateInt.h"

#include <iostream>
#include <queue>
#include <ctime>
#include <cstdlib>

void printQueue(std::queue<int> q); 


void queue()
{
	int rounds; 
	int perChanceEnd; 
	int perChanceBeg; 


	std::cout << "How many rounds would you like the simulation to run? "; 
	std::cin >> rounds; 
	validateInt(rounds); 

	std::cout << "\nEnter the percentage chance to put a randomly generated number at the end of the buffer. "; 
	std::cin >> perChanceEnd; 
	validateInt(perChanceEnd);

	std::cout << "\nEnter the percentage chance to take out a randomly generated number at the front of the buffer. "; 
	std::cin >> perChanceBeg; 
	validateInt(perChanceBeg); 



	int N, N2, N3; 
	int round = 0; 
	int average = 0;
	int total = 0; 
	std::queue<int> Queue; 



	for (int i = 0; i < rounds; i++)
	{
		round += 1;
		std::cout << std::endl;
		std::cout << "\n-----------------------------------------------------------------\n";
		std::cout << "Round " << round;
		N = std::rand() % 1000 + 1;
		N2 = std::rand() % 100 + 1;
		N3 = std::rand() % 100 + 1;



		//If the random value is less than the user entered value
		if (N2 <= perChanceEnd)
		{
			//append N into queue
			std::cout << "\nAdding " << N << " to the queue";
			Queue.push(N);//adds

		}
		else
		{
			std::cout << std::endl;
			std::cout << N << " was not added to the queue";
		}

		//If the random value is less than the user entered value and queue is not empty
		if (N3 <= perChanceBeg && !Queue.empty())
		{
			//remove number from front of queue
			std::cout << "\nRemoving the " << Queue.front() << " the queue\n";
			Queue.front();
			Queue.pop();
		}
		else
		{
			std::cout << std::endl;
			std::cout << "First number was not removed from the queue\n";
		}


		printQueue(Queue); 

		//If the queue is empty
		if (Queue.empty())
		{
			std::cout << "\nThe queue is empty\n";
		}



		//Output length of buffer
		std::cout << "\nThe length of the queue: " << Queue.size() << std::endl;


		//Output average length of buffer
		double average;

		//CHECK THIS PART TO MAKE SUREITS WORKING????????????????????????????
		if (i > 0)
		{
			average = (total * ((i + 1) - 1) + Queue.size()) / (i + 1);
			std::cout << "\nThe average length is " << average;
		}
		else
		{
			average = Queue.size();
			total = average;
			std::cout << "\nThe average length is " << average;
		}



	}

}



void printQueue(std::queue<int> q)
{
	while (!q.empty())
	{
		std::cout << q.front() << " "; 
		q.pop(); 
	}
	std::cout << std::endl; 
}