#pragma once
//#include "node.h"
#include <iostream>
using namespace std;
template <typename T>

class linkedlist {
	struct node {
	public:
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
		clear();
		delete tail;
	}
	void push(const T& val);
	void pop_front();
	T& front();
	void display();
	bool empty();
	void clear();
	void remove(const T& val);
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
	node *temp = new node;
	temp = head;
	while (temp != NULL)
	{
		cout << temp->data << "\t" << endl;
		temp = temp->next;
	}
	delete temp;
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
	while (head != NULL) 
	{
		node *temp;
		temp = head->next;
		delete head;
		head = temp;

	}
}

template<typename T>
inline void linkedlist<T>::remove(const T & val)
{
	if (head == NULL) {
		return;
	}
	do {
		if (head->data == val) {
			node * temp = head;
			head = head->next;
			
		}
				
	} 
	while (head->data == val);
	node *temp = head->next;
	node * hold = head;
	while (temp != NULL) {
		if (temp->data == val) {
			hold->next = temp->next;
			temp = hold->next;

		}
		else {
			hold = hold->next;
			hold = temp;
			temp = temp->next;

		}

	}
}
