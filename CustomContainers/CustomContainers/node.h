#pragma once
template <typename T>
class myNode 
{
	friend class List<T>;

public:
	myNode(T);
	T getData();

private:
	T data; 
	myNode* nextPtr; 
};

template <typename T>
myNode<T>::myNode(T dataIn)
{
	data = dataIn; 
	nextPtr = 0; 
}

template <typename T>
T myNode<T>::getData() 
{
	return data;
}