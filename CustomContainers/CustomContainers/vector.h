#pragma once
template<typename T>
class vectorclass
{
	T* vector_pointer;  
	size_t vector_size, vector_capacity;

public:
	vectorclass() :vector_pointer(NULL), vector_size(0), vector_capacity(0) {}


	~vectorclass()  
	{
		delete[] vector_pointer;
	}

	vectorclass& operator =(vectorclass other) 
	{
		swap(*this, other);
		return *this;
	}


	void resize(const size_t &newsize) 
	{
		if (newsize < vector_size)
		{
			for (size_t i = newsize; i < vector_size; i++)
			{
				vector_pointer[i].~T();
			}
		}
		else if (newsize > vector_capacity)
		{
			reserve(newsize);
		}
		vector_size = newsize;
	}

	void reserve(size_t newcapacity) 
	{
		
		if (newcapacity > vector_capacity)
		{
			T* temp = new T[newcapacity];
			std::copy(vector_pointer, vector_pointer + vector_capacity, temp);
			delete[] vector_pointer;
			vector_pointer = temp;
			vector_capacity = newcapacity;
		}
	}

	void push_back(const T &val)
	{
		if (vector_capacity <= vector_size)
			reserve(vector_capacity);
		vector_pointer[vector_size++] = val;
	}

	void pop_back() 
	{
		
	}
	void insert(const size_t& pos, const T& val)
	{
		
	}

	size_t size() const
	{
		return vector_size;
	}

	size_t capacity() const
	{
		return vector_capacity;
	}

	T& operator [](const size_t &pos)
	{
		return vector_pointer[pos];
	}


	bool empty() const
	{
		return vector_size == 0;
	}

	T& at(const size_t& pos)  
	{
		
	}


	void erase(const size_t& pos) 
	{
		
	}

	void clear()
	{

	}
};
