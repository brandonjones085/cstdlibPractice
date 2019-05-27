


#include "Queue.h"

#include <iostream>
#include <queue>
#include <ctime>
#include <cstdlib>


void queue()
{
	int rounds; 
	int perChanceEnd; 
	int perChanceBeg; 


	std::cout << "How many rounds would you like the simulation to run? "; 
	std::cin >> rounds; 
	//validateInt(rounds); 

	std::cout << "\nEnter the percentage chance to put a randomly generated number at the end of the buffer. "; 
	std::cin >> perChanceEnd; 
	//validateInt(perChanceEnd);

	std::cout << "\nEnter the percentage chance to take out a randomly generated number at the front of the buffer. "; 
	std::cin >> perChanceBeg; 
	//validateInt(perChanceBeg); 

	std::queue<int> Queue; 

	for (int i = 0; i < rounds; i++) 
	{

		int N = std::rand() * 1000 + 1;
		int N2 = std::rand() * 100 + 1;
		int N3 = std::rand() * 100 + 1;

		if (N2 <= perChanceEnd)
		{
			//append N into queue
			std::cout << "\nAdding " << N << " to the queue";
			Queue.push(N);

		}
		else
		{
			std::cout << N << " was not added to the queue";
		}


		if (N3 <= perChanceBeg)
		{
			//remove number from front of queue
			std::cout << "\nRemoving the first number ofthe queue\n";
			Queue.front();
			Queue.pop();
		}
		else
		{
			std::cout << "First number was not removed from the queue\n";
		}


		//Prints the queue
		std::cout << "\nThe queue...\n";
		while (!Queue.empty())
		{
			std::cout << Queue.front() << " ";
			Queue.pop();
		}


		//Output length of buffer
		std::cout << "\nThe length of the queue: " << Queue.size() << std::endl;


		//Output average length of buffer





	}


	


}
