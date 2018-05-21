// stdafx.h : include file for standard system include files,

#pragma once

#include <iostream>
#include <Windows.h>
#include <math.h>
#include <thread>
#include <string>
#include <cctype>

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

