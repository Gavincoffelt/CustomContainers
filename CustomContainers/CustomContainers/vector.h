#pragma once
template<typename T>
class vectorclass
{
	T* vecPointer;  
	size_t vector_size, vector_capacity;

public:
	//Constructor
	vectorclass() :vecPointer(NULL), vector_size(0), vector_capacity(0) {}
	//Destructor
	~vectorclass()  
	{
		delete[] vecPointer;
	}
	//Returns Vectors size
	size_t size() const
	{
		return vector_size;
	}
	//Returns Vectors Total Capacity
	size_t capacity() const
	{
		return vector_capacity;
	}
	// Changes Total Capacity of Vector to at least newcapacity
	void reserve(size_t newcapacity) 
	{
		
		T *temp = new T[newcapacity];
		if (!(newcapacity > vector_capacity)) { return; }

		for (size_t i = 0; i < vector_size; i++) {
			temp[i] = vecPointer[i];
		}
		vector_capacity = newcapacity;
		delete[] vecPointer;
		vecPointer = temp;
	}
	// Resizes Vector to newsize 
	void resize(const size_t &newsize) 
	{
		if (newsize < vector_size)
		{
			for (size_t i = newsize; i < vector_size; i++)
			{
				vecPointer[i].~T();
			}
		}
		else if (newsize > vector_capacity)
		{
			reserve(newsize);
		}
		vector_size = newsize;
	}
	// Adds val to the back of the vector
	void push_back(const T &val)
	{
		if (vector_capacity <= vector_size)
			reserve(vector_capacity);
		vecPointer[vector_size++] = val;
	}
	// Removes val from the back of the vector
	void pop_back() 
	{
		--vector_size;
	}
	// Inserts val into pos of the vector
	void insert(const size_t& pos, const T& val)
	{
		if (vector_capacity <= vector_size)  
			reserve(vector_size);
		vector_size++;
		for (size_t i = vector_size - 1; i > pos; i--)  
		{
			vecPointer[i] = vecPointer[i - 1];
		}
		vecPointer[pos] = val;
	}

	
	// Returns [pos] 
	T& operator [](const size_t &pos)
	{
		return vecPointer[pos];
	}
	// Overloaded = operator
	vectorclass& operator =(vectorclass other) 
	{
		swap(*this, other);
		return *this;
	}
	// Returns pointer at pos
	T& at(const size_t& pos)  
	{
		return vecPointer[pos];
	}
	// Emptys entire vector
	bool empty() const
	{
		return vector_size == 0;
	}
	// Erases Vectors contents at pos
	void erase(const size_t& pos) 
	{
		vecPointer[pos].~T();
		for (size_t i = pos; i < vector_size - 1; i++)
		{
			vecPointer[i] = vecPointer[i + 1]; 
		}
		--vector_size;
	}
	// Clears entire vector 
	void clear()
	{
		for (size_t i = 0; i < vector_size; i++)
		{
			vecPointer[i].~T();
		}
		vector_size = 0;
	}
};
