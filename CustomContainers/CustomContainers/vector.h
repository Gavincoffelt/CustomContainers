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
		
	}

	vectorclass& operator =(vectorclass other) 
	


	void resize(const size_t &newsize) 
	

	void reserve(size_t newcapacity) 
	

	void push_back(const T &val)


	void pop_back() 
	
	void insert(const size_t& pos, const T& val)


	size_t size() const
	
	size_t capacity() const
	
	T& operator [](const size_t &pos)
	

	const T& operator [](const size_t &pos) const
	
	bool empty() const
	

	T& at(const size_t& pos)  
	

	const T& at(const size_t& pos) const
	

	void erase(const size_t& pos) 


	void clear()
	

};
