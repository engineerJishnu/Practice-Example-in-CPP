// example1.cpp : Defines the entry point for the console application.

#include "stdafx.h"

//when i am defining the template body in stdafx.cpp the template isn't working.
template <typename T>
void Print(T what_ever) {
	std::cout << what_ever << std::endl;
}

int main()
{
	log("Hello World!");
	//----------------------------
	/*std::thread worker(doWork);
	std::cin.get();
	s_Finished = true;
	worker.join();*/
	//----------------------------
	pythagorasTh();
	//----------------------------
	multiplication_table();
	//----------------------------
	//Constructs the new thread and runs it. Does not block execution.
	std::thread t1(task1, "Hello C++");
	/*Makes the main thread wait for the new thread to 
	finish execution, therefore blocks its own execution. */
	t1.join();
	//----------------------------
	Print(786);
	Print(452.68f);
	Print("Hello Asshole Bjarne!");
	//----------------------------
	simple_triangle();
	draw_pyramid();
	//----------------------------
	std::cin.get();
	//----------------------------
	something object1;
	object1.some_names = "C++ programming languages";
	object1.some_nos = 400;

	object1.do_something();

	animals Animal = donkey;
	object1.tell_name_animal(Animal);

	return 0;
}

