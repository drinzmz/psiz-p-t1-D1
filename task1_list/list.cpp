#include "pch.h"
#include "list.h"


void deinitList(List* pRoot)
{
	free(pRoot);
	pRoot = NULL;
}


// function adding a car to the list
void addCar(List* pRoot, char* plateNum)
{

}
//function removes a car
void removeCar(List* pRoot, char* plateNum)
{

}

//init list void
List* initList(void)
{
	List* pRoot = (List*)malloc(sizeof(*pRoot));

	return pRoot;
}

//func will print all cars in the list
void printAll(List* pRoot) {
	if (pRoot) {
		List* pCurrent = pRoot;
		
		while (pCurrent) {
			std::cout << "pPlateNum: " << pCurrent->pPlateNum << ", entryTime: " << ctime(&pCurrent->entryTime) << std::endl;
			pCurrent = pCurrent->pNext;
		}
	}
}

//Function that assigns a number to the element
int numberOfElements(List* pRoot) {
	return 0;
}



//func will print a new car 
void printNewCar(List* pRoot) 
{
	
}
