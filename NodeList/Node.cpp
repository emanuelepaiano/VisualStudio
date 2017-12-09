/*
Visual Studio - C++ training code sample
Emanuele Paiano - http://emanuelepaiano.github.io

Sample 1: Write single pointer list for strings storage.

*/

#include "stdafx.h"
#include "Node.h"


Node::Node()
{
	this->next = NULL;
}

Node::Node(string element) 
{
	this->element = element;
	this->next = NULL;
}


Node::~Node()
{
}

string Node::getElement() {
	return this->element;

}

string Node::setElement(string value) 
{
	this->element = value;
	return this->element;
}

Node* Node::getNext() 
{
	return this->next;
}


Node* Node::setNext(Node* node) 
{
	this->next = node;
	return this->next;
}