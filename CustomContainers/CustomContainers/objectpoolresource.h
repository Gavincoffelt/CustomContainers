#pragma once
class Resource
{
	int object;
public:
	Resource()
	{
		object = 0;
	}
	void reset()
	{
		object = 0;
	}
	int getValue()
	{
		return object;
	}
	void setValue(int number)
	{
		object = number;
	}
};