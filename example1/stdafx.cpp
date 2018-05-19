// stdafx.cpp : source file that includes just the standard includes
// example1.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// body of function

void log(const char* message) {
	std::cout << message << std::endl;
	std::cout << "Press ENTER to start the program..." << std::endl;
	std::cin.get();
}

double pythagorasTh() {
	int x, y;
	std::cout << "This calculates Pythagoral Theorems for two numbers." << std::endl;
	std::cout << "Enter two numbers with space between the two..." << std::endl;
	std::cin >> x >> y;
	double result = sqrt(x*x + y * y);
	std::cout << "The pythagoras theorem for " << x << " and " << y << " is " << result << std::endl;
	return result;
}

void multiplication_table() {
	int number;
	std::cout << "Enter the number whose multiplication you wish to see" << std::endl;
	std::cin >> number;
	std::cout << "\nThe Multiplication table for the number " << number << " is below." << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	
	for (int times = 1; times < 11; times++) {
		std::cout << "\t" << number << " x " << times << " = " << number * times << "." << std::endl;
		Sleep(100);
	}
}

//void doWork() {
//	using namespace std::literals::chrono_literals;
//	while (!s_Finished) {
//		std::cout << "thread working... and press ENTER key to stop the thread" << std::endl;
//		Sleep(200);
//		std::this_thread::sleep_for(1s);
//		/* VOID WINAPI Sleep( _In_ DWORD dwMilliseconds); */
//	}
//}

void task1(std::string msg)
{
	std::cout << "task1 says: " << msg << std::endl;
}