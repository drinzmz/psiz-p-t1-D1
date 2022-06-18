#pragma once
#ifndef LIST_H
#define LIST_H

typedef struct List {
	char* pPlateNum;
	time_t entryTime;
	struct List* pNext;
} List;

List*initList(void) {
	List* new_one = (List*)malloc(sizeof(List));
	return new_one;
}


void deinitList(List* pRoot);
//function for adding a car
void addCar(List* pRoot, char* plateNum);
void removeCar(List* pRoot, char* plateNum);
void printAll(List* pRoot);
int numberOfElements(List* pRoot);

#endif // !LIST_H
