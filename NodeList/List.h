/*
Visual Studio - C++ training code sample
Emanuele Paiano - http://emanuelepaiano.github.io

Sample 1: Write single pointer list for strings storage.

*/

#pragma once
#include "Node.h"

/* Implements Nodes list */
class List
{
public:
	/* List constructor */ 
	List();
	
	/* List destructor */
	~List();

	/*	add a new node to List 	*/
	Node* addNode(Node* node);

	/*	remove node from list 	*/
	Node* deleteNode(Node* node);

	/*	get head from list 	*/
	Node* getHead();
	
	/*	get tail from list 	*/
	Node* getTail();

	/*	get node from list, searching by element. return empty node if fails 	*/
	Node* searchNode(string element);

	/*	get i-th node address from list. Index starts from one. Return empty node if fails 	*/
	Node *getNode(int i);

	/*	return true if list is empty, false otherwise 	*/
	bool isEmpty();

	/*	print element in list 	*/
	void printList();

private:
	Node* head=NULL;
	Node* tail=NULL;
	int size = 0;
};

