// stdafx.h : include file for standard system include files,

#pragma once

#include <iostream> //std::cout , std::cin, std::endl, 
#include <Windows.h> //Sleep()
#include <math.h> //sqrt()
#include <thread> //  std::thread 
#include <string> //std::string
#include <cctype> //
#include <iterator> //std::ostream_iterator
#include <vector>       // std::vector
#include <algorithm>    // std::copy
#include <fstream>      // std::ofstream


// functions

void log(const char* message);
//--------------------------------
double pythagorasTh();
//--------------------------------
void multiplication_table();
//--------------------------------
//static bool s_Finished = false;
//void doWork();
//--------------------------------
void task1(std::string msg);
//--------------------------------
/*
the template declarations and definitions 
should go into the same file. */

void simple_triangle();

void draw_pyramid();
//--------------------------------
enum animals {
	cow = 1,
	sheep,
	goat,
	dog,
	donkey
};
class something {
public:
	int some_nos;
	std::string some_names;
	
	// ============================
	// Constructors and destructor
	// ============================
	something();
	~something();
	
	//methods 

	void do_something();
	void tell_name_animal(animals name);
};

