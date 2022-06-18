#include "pch.h"
#include "list.h"

//comment that solves an issue
int main()
{
	List* pFirstFloor = initList();
	List* pSecFloor = initList();
	
	deinitList(pFirstFloor);
	deinitList(pSecFloor);
}
