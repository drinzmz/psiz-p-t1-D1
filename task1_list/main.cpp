﻿#include "pch.h"
#include "list.h"
#include <ctime>

int main()
{
	List* pFirstFloor = initList();
	List* pSecFloor = initList();
	
	deinitList(pFirstFloor);
	deinitList(pSecFloor);
}
