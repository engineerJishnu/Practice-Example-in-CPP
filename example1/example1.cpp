// example1.cpp : Defines the entry point for the console application.

#include "stdafx.h"

template <typename T>
void Print(T what_ever) {
	std::cout << what_ever << std::endl;
}

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

	Print(786);
	Print(452.68f);
	Print("Hello Asshole Bjarne!");

	simple_triangle();

	std::cin.get();
	return 0;
}

