#include "ArrayList.h"
#include <iostream>
using namespace std;

ArrayList::ArrayList()
{
	size = 0;
	array = NULL;
}
ArrayList::ArrayList(int arraySize, int value)
{
	this->size = arraySize;
	array = new int[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = value;
	}
}

ArrayList::~ArrayList()
{
	delete[] array;
}

int ArrayList::getSize()
{
	return size;
}
int* ArrayList::getArray()
{
	return array;
}

void ArrayList::append(int newValue)
{
	int* temp = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		temp[i] = array[i];
	}
	temp[size] = newValue;
	size++;
	delete[] array;
	array = temp;
}
void ArrayList::insertElement(int index,
	int insertedEle)
{
	if (index >= 0 && index <= size)
	{
		int* temp = new int[size + 1];
		for (int i = 0; i < index; i++)
		{
			temp[i] = array[i];
		}
		temp[index] = insertedEle;
		for (int i = index + 1; i <= size; i++)
		{
			temp[i] = array[i - 1];
		}
		size++;
		delete[] array;
		array = temp;
	}
}
void ArrayList::deleteElement(int index)
{
	if (index >= 0 && index < size)
	{
		int* temp = new int[size - 1];
		int newIndex = 0;
		for (int i = 0; i < size; i++)
		{
			if (i != index)
			{
				temp[newIndex] = array[i];
				newIndex++;
			}
		}
		size--;
		delete[] array;
		array = temp;
	}
}

void ArrayList::print()
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}