/*
Visual Studio - C++ training code sample
Emanuele Paiano - http://emanuelepaiano.github.io

Sample 1: Write single pointer list for strings storage.

*/

#pragma once

using namespace std;

class Node
{
public:

	/* Constructor */
	Node();

	/* Constructor  */
	Node(string element);
	~Node();

	/* return next node pointer (NULL if fails) */
	Node* getNext();

	/* set next node pointer */
	Node* setNext(Node *node);

	/* set node content */
	string setElement(string value);

	/* get node content */
	string getElement();

private:
	string element;
	Node *next;
};

