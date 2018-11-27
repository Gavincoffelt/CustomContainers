#pragma once
#include "node.h"
#include <iostream>
using namespace std;
template <typename T>
class List 
{
public:
	List();
	~List();
	void NewNode(T); 
private:
	myNode<T> *startPtr;
	myNode<T> *endPtr;
	bool isEmpty();  
};



template <typename T>
List<T>::List() 
{
	startPtr = NULL;
	endPtr = NULL;
}

template <typename T>
List<T>::~List()
{
	if (!isEmpty()) 
	{
		myNode<T> *currentPtr = startPtr;
		myNode<T> *tempPtr;

		while (currentPtr != 0)
		{
			tempPtr = currentPtr;
			currentPtr = currentPtr->nextPtr;
			delete tempPtr;
		}
	}
}

template <typename T>
bool List<T>::isEmpty()
{
	if (startPtr == NULL && endPtr == NULL) 
		return 1;
	else
		return 0;
}

template <typename T>
void List<T>::NewNode(T dataIn)
{
	if (isEmpty()) 
	{
		insertBegin(dataIn);
	}
	else 
	{
		if (dataIn < startPtr->data) 
		{
			insertBegin(dataIn);
		}
		else if (dataIn >= endPtr->data) 
		{
			insertEnd(dataIn);
		}
		else 
		{
			myNode<T> * currentPtr = startPtr;
			myNode<T> * newPtr = new myNode<T>(dataIn);
			while (currentPtr != endPtr) 
			{
				if ((newPtr->data < currentPtr->nextPtr->data) && (newPtr->data >= currentPtr->data)) 
				{
					myNode<T> * next = currentPtr->nextPtr;
					currentPtr->nextPtr = newPtr; 
					newPtr->nextPtr = next; 
					break;
				}
				currentPtr = currentPtr->nextPtr; 
			}
		}
	}
}
