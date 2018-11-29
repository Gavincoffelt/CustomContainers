#pragma once
//#include "node.h"
#include <iostream>
using namespace std;
template <typename T>

class linkedlist {
	struct node {
	public	
		T data;
	node * next;
	};
private:
	node * head, *tail;
	
public:
	linkedlist() {
		head = NULL;
		tail = NULL;
	}
	~linkedlist() {
		delete head;
		delete tail;
	}
	void push(const T& val);
	void pop_front();
	T& front();
	void display();
	bool empty();
	void clear();
};


template<typename T>
inline void linkedlist<T>::push(const T & val)
{
	node *temp = new node;
	temp->data = val;
	temp->next = NULL;
	if (head == NULL)
	{
		head = temp;
		tail = temp;
		temp = NULL;
	}
	else
	{
		tail->next = temp;
		tail = temp;
	}
}

template<typename T>
inline void linkedlist<T>::pop_front()
{
	node *temp = new node;
	temp = head;
	head = head->next;
	delete temp;
}

template<typename T>
inline T & linkedlist<T>::front()
{
	return head->data;
}

template<typename T>
inline void linkedlist<T>::display()
{
	
}

template<typename T>
inline bool linkedlist<T>::empty()
{
	if (head == NULL && tail == NULL) {
		return true;
	}
	else {
		return false;
	}

}

template<typename T>
inline void linkedlist<T>::clear()
{
	while (head != NULL) {
		delete head;
		head = head->next;
	}
}
