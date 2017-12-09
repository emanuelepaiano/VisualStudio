/*
Visual Studio - C++ training code sample
Emanuele Paiano - http://emanuelepaiano.github.io

Sample 1: Single pointer list for strings storage.

*/

#include "stdafx.h"
#include "List.h"


List::List()
{
	head = NULL;
	tail = NULL;
	size = 0;
}


List::~List()
{
}


Node* List::addNode(Node *node)
{
	if (isEmpty()) {
		head = node;
		tail = node;
		head->setNext(tail);
	}
	else {
		tail->setNext(node);
		tail = node;
	}
	size++;
	return node;
}

Node* List::deleteNode(Node * node)
{
	bool deleted = false;
	Node* previous = head;
	Node* current = head;

	for (int i = 0; i < size && !deleted && current!=NULL; i++) 
	{

		if (current == node) 
		{
			if (current == head) {
				head = current->getNext();
			}else {
				previous->setNext(current->getNext());
			}
			size--;
			return node;
		}

		previous = current;
		current = current->getNext();
	}
	return node;
}

Node* List::getHead()
{
	return head;
}

Node* List::getTail()
{
	return tail;
}

Node* List::searchNode(string element)
{
	Node *current = head;
	for (int i = 0; i < size; i++) 
	{
		if (current->getElement() == element)
			return current;
		else
			current=current->getNext();
	}
	return NULL;
}

Node * List::getNode(int i)
{
	Node *current = head;
	for (int j = 1; j <= i && i<=size; j++)
	{
		if (j==i)
			return current;
		else
			current = current->getNext();
	}
	Node *temp=new Node;
	return temp;
}

bool List::isEmpty()
{
	return size==0;
}

void List::printList()
{
	Node *current=head;
	for (int i = 0; i < this->size; i++) 
	{
		cout << current->getElement() << endl;
		current = current->getNext();
	}
}

