// example1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	log("Hello World!");

	/*std::thread worker(doWork);
	std::cin.get();
	s_Finished = true;
	worker.join();*/

	pythagorasTh();

	multiplication_table();
	
	//Constructs the new thread and runs it. Does not block execution.
	std::thread t1(task1, "Hello C++");
	/*Makes the main thread wait for the new thread to 
	finish execution, therefore blocks its own execution. */
	t1.join();

	std::cin.get();
	return 0;
}

