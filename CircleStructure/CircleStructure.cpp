// CircleStructure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <list>
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	using namespace std;

	list <char> l;
	
	l.push_back('a');
	l.push_back('b');
	l.push_back('c');

	while (1) //infinite loop except for getchar break
	for (list <char>::iterator li = l.begin();li != l.end();li++)
	{
		std::cout << "\n" << *li << "\n";//iterator pointer to list values

		//pause the screen
		char x = 0;
		x = getchar();
		if (x == ' ')
			return 0;
	}

}