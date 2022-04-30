#include "pch.h"
#include "list.h"


int main()
{
	List* pFirstFloor = initList();
	List* pSecFloor = initList();
	
	deinitList(pFirstFloor);
	deinitList(pSecFloor);
}
