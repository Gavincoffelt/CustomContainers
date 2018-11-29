#pragma once
class Resource
{
	int value;
public:
	Resource()
	{
		value = -1;
	}
	void reset()
	{
		value = 0;
	}
	int returnValue()
	{
		return value;
	}
	void setValue(int number)
	{
		value = number;
	}
};