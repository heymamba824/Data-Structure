#include<iostream>
using namespace std;
#include"DymanicArray.h"
DymanicArray::DymanicArray()
{
	size = 0;
	capacity = 10;
	pAdd = new int[capacity];
}
DymanicArray::~DymanicArray()
{
	delete pAdd;
	cout << "free array" << endl;
}
void DymanicArray::Array_Pushback(int value)
{
	if (pAdd == NULL)
		return;
	if (size == capacity)
	{
		int* newarray = new int[2 * capacity];
		memcpy(newarray, pAdd, capacity * sizeof(int));
		delete[]pAdd;
		pAdd = newarray;
		capacity = 2 * capacity;
	}
	pAdd[size] = value;
	size++;
}
void DymanicArray::Array_DeletePos(int pos)
{
	if (pAdd == NULL)
		return;
	if (pos<0 || pos>size)
		return;
	for (int i = pos; i < size-1; i++)
	{
		pAdd[i] = pAdd[i + 1];
	}
	size--;
}
int DymanicArray::Array_FindPos(int value)
{
	if (pAdd == NULL)
		return -1;
	for (int i = 0; i < size; i++)
	{
		if (pAdd[i] == value)
		{
			return i;
			break;
		}
	}
	return -1;
}
void DymanicArray::Array_DeleteVal(int value)
{
	if (pAdd == NULL)
		return;
	/*int pos = Array_FindPos(value);
	Array_DeletePos(pos);*/
	Array_DeletePos(Array_FindPos(value));
}
void DymanicArray::Array_Print()
{
	if (pAdd == NULL)
		return;
	for (int i = 0; i < size ; i++)
		cout << pAdd[i] << "  ";
	cout << endl;
}
int DymanicArray::Array_Capacity() {
	return capacity;
}
int DymanicArray::Array_Size()
{
	return size;
}
int DymanicArray::At_Array(int pos)
{
	return pAdd[pos];
}