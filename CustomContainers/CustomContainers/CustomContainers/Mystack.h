#pragma once
#include<iostream>
#include<cstdlib>
#define default_value 10
using namespace std;

template< typename T > class myStack
{
public:
	myStack(int = default_value);
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
// Default Constructor.
template< class T > myStack<T>::myStack(int x) :size(x),values(new T[size]),	index(-1)
{
	
}
// Pushes 'x' to the stack if the stack is not full.
template< typename T> bool myStack<T>::push(T x)
{
	bool p = 0;
	if (!myStack<T>::isFull())
	{
		index += 1;
		values[index] = x;
		p = 1;
	}
	return p;
	
}
// Pop Function to remove last item in stack.
template< typename T > T myStack<T>::pop()
{
	T val = -1;
	if (!myStack<T>::isEmpty())
	{
		val = values[index];
		index -= 1;
	}
	else
	{
		cout << "Stack is Empty : " << endl;
	}
	return val;

}
// bool to check if stack is empty.
template< typename T > bool myStack<T>::isEmpty()
{
	if (index == -1)
		return 1;
	else
		return 0; 
}
// bool to check if stack is full.
template< typename T > bool myStack<T>::isFull()
{
	if ((index + 1) == size)
		return 1;
	else
		return 0;
	
}
