#include "Header.h"

bool stack::isFull()
{
	if (top==max_size-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}