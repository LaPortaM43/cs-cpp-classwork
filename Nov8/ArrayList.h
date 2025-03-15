#pragma once
class ArrayList
{
private:
	int* array;
	int size;

public:
	ArrayList();
	ArrayList(int arraySize, int value);
	~ArrayList();

	int getSize();
	int* getArray();

	void append(int newValue);
	void insertElement(int index, int insertedEle);
	void deleteElement(int index);

	void print();
};

