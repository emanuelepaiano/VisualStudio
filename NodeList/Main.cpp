/*
	Visual Studio - C++ training code sample
	Emanuele Paiano - http://emanuelepaiano.github.io

	Sample 1: Write single pointer nodelist for string set storage.

*/

// Main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int main()
{
	Node n1("first element");
	Node n2("second element");
	Node n3("third element");
	List list;
	
	list.addNode(&n1);
	list.addNode(&n2);
	list.addNode(&n3);

	list.printList();

	cout << list.getNode(3)->getElement() << endl;

	// block dos prompt/output window

	char ch;
	cin >> ch;

	return 0;

}

