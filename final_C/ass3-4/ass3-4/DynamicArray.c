#include "DynamicArray.h"
#include <stdio.h>
#include <stdlib.h>

DynamicArray* createDynamicArray(int capacity)
{
	DynamicArray* dynamicArray = (DynamicArray*)malloc(sizeof(DynamicArray));

	Element* elements = (Element*)malloc(capacity * sizeof(Element));

	dynamicArray->elements = elements;
	dynamicArray->size = 0;
	dynamicArray->capacity = capacity;

	return dynamicArray;
}

void deleteDynamicArray(DynamicArray* dynamicArray)
{
	for (int i = 0; i < dynamicArray->size; i++)
		deleteTask(dynamicArray->elements[i]);

	free(dynamicArray->elements);
	free(dynamicArray);
}

void resize(DynamicArray* dynamicArray)
{
	dynamicArray->capacity *= 2;

	Element* elementsResized = (Element*)malloc(dynamicArray->capacity * sizeof(Element));
	for (int i = 0; i < dynamicArray->size; i++)
		elementsResized[i] = dynamicArray->elements[i];
	
	free(dynamicArray->elements);

	dynamicArray->elements = elementsResized;
	
}

void addElement(DynamicArray * dynamicArray, Element element)
{
	if (dynamicArray->capacity == dynamicArray->size)
		resize(dynamicArray);

	dynamicArray->elements[dynamicArray->size] = element;
	dynamicArray->size += 1;
}

void removeElement(DynamicArray * dynamicArray, int position)
{
	deleteTask(dynamicArray->elements[position]);

	for (int i = position; i < dynamicArray->size - 1; i++)
		dynamicArray->elements[i] = dynamicArray->elements[i + 1];

	dynamicArray->size -= 1;
}

int getLenght(DynamicArray * dynamicArray)
{
	return dynamicArray->size;
}

Element getElement(DynamicArray* dynamicArray, int position)
{
	return dynamicArray->elements[position];
}

DynamicArray* getCopyOfArray(DynamicArray* dynamicArray)
{
	int lenght = getLenght(dynamicArray);
	DynamicArray* newDynamicArray = createDynamicArray(lenght);

	for (int i = 0; i < lenght; i++)
	{
		Element element = dynamicArray->elements[i];
		Element newElement = getCopyOfTask(element);
		newDynamicArray->elements[i] = newElement;
	}

	newDynamicArray->size = lenght;

	return newDynamicArray;
}
