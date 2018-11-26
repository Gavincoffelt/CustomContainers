#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;

#define SIZE 20

template <typename T>
class myQueue
{
	T *arr; 		
	int capacity;   
	int front;  	
	int rear;   	
	int count;  	

public:
	myQueue(int size = SIZE);		
	void dequeue();
	void enqueue(T x);
	T peek();
	int size();
	bool isEmpty();
	bool isFull();
};

//Constructor.
template <typename T>
myQueue<T>::myQueue(int size)
{
	arr = new X[size];
	capacity = size;
	front = 0;
	rear = -1;
	count = 0;
}
//Adds item to queue.
template <typename T>
void myQueue<T>::enqueue(T item)
{
	rear = (rear + 1) % capacity;
	arr[rear] = item;
	count++;
}
//Removes item from queue.
template <typename T>
void myQueue<T>::dequeue()
{
	front = (front + 1) % capacity;
	count--;
}
// Returns size of queue
template <typename T>
int myQueue<T>::size()
{
	return count;
}
// returns item at front of array.
template <typename T>
T myQueue<T>::peek()
{
	return arr[front];
}
// bool to check if queue is empty.
template <typename T>
bool myQueue<T>::isEmpty()
{
	return (size() == 0);
}
// Bool to check if it is full.
template <typename T>
bool myQueue<T>::isFull()
{
	return (size() == capacity);
}