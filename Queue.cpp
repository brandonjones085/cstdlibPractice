


#include "Queue.h"

#include <iostream>
#include <queue>
#include <ctime>
#include <cstdlib>



//source: https://www.geeksforgeeks.org/queuepush-and-queuepop-in-cpp-stl/

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


		

		if (N2 <= perChanceEnd)
		{
			//append N into queue
			std::cout << "\nAdding " << N << " to the queue";
			Queue.push(N);

		}
		else
		{
			std::cout << std::endl; 
			std::cout << N << " was not added to the queue";
		}


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


		//Prints the queue
		
		while (!Queue.empty())
		{
			std::cout << "\nThe queue...\n";
			std::cout << Queue.front() << " ";
			Queue.pop(); 
			
		}
		if (Queue.empty())
		{
			std::cout << "\nThe queue is empty\n"; 
		}



		//Output length of buffer
		std::cout << "\nThe length of the queue: " << Queue.size() << std::endl;


		//Output average length of buffer
		double average; 

		if (i > 0)
		{
			average = (total * ((i + 1) - 1) + Queue.size()) / (i + 1); 
				std::cout << "\nThe average length is "<< average; 
		}
		else
		{
			average = Queue.size(); 
			total = average; 
			std::cout << "\nThe average length is " << average; 
		}



	}


	


}
