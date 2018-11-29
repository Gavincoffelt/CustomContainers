#pragma once
#include <string>
#include <iostream>
#include <list>
#include "objectpoolresource.h"

class myObjectPool
{
public:
	std::list<Resource*> resources;

	static myObjectPool* instance;
	myObjectPool() {}


	static myObjectPool* getInstance()
	{
		if (instance == 0)
		{
			instance = new myObjectPool;
		}
		return instance;
	}

	Resource* getResource()
	{
		if (resources.empty())
		{
			return new Resource;
		}
		else
		{
			std::cout << "Reusing" << std::endl;
			Resource* resource = resources.front();
			resources.pop_front();
			return resource;
		}
	}
	void push_Resource(Resource* object)

	{
		object->reset();

		resources.push_back(object);
	}
	
};
myObjectPool* myObjectPool::instance = 0;