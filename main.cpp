// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "unsortedlist.h"
#include <iostream>
using namespace std;
int main()
{
	Nodeptr node;
	unsortedlist a;
	a.insert(1);
	a.insert(2);
	a.insert(3);
	a.insert(4);

	a.remove(2);

	if (a.search(2) != NULL) {
		cout << "FOUND" << endl;
	}
	else
		cout << "NOT FOUND" << endl;

	a.showlist();

}

