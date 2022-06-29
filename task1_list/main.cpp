#include "pch.h"
#include "list.h"
#include <ctime>

List mojaLista;
// comment to ext 3
int main()
{
	List* pFirstFloor = initList();
	List* pSecFloor = initList();
	
	deinitList(pFirstFloor);
	deinitList(pSecFloor);
}
