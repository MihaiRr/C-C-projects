#pragma once
#include "Task.h"

typedef Task* Element;

typedef struct
{
	Element* elements;
	int size;
	int capacity;

}DynamicArray;

DynamicArray* createDynamicArray(int capacity);

void deleteDynamicArray(DynamicArray* dynamicArray);

void addElement(DynamicArray* dynamicArray, Element element);

void removeElement(DynamicArray* dynamicArray, int position);

int getLenght(DynamicArray* dynamicArray);

Element getElement(DynamicArray* dynamicArray, int position);

DynamicArray* getCopyOfArray(DynamicArray* dynamicArray);

