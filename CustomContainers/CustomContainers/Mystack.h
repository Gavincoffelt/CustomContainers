#pragma once
#include<iostream>
#include<cstdlib>
#define default_value 10
using namespace std;

template< class T > class myStack
{
public:
	myStack(int = default_value);//default constructor
	~myStack()//destructor
	{
		
	}
	bool push(T);
	T pop();
	bool isEmpty();
	bool isFull();
private:
	int size;
	T *values;
	int index;

};

template< class T > myStack<T>::Stack(int x) :
{
}


template< class T > bool myStack<T>::push(T x)
{
	
}

template< class T > T myStack<T>::pop()
{
	

}
template< class T > bool myStack<T>::isEmpty()
{

}
template< class T > bool myStack<T>::isFull()
{
	
}
