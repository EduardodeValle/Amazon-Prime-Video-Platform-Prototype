#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <windows.h>

using namespace std;

class InvalidOption : public exception
{
private:
	string msg;
public:
	InvalidOption(string); // constructor
	string what(); // imprimir mensaje
};

