#include "stdafx.h"
#include<iostream>
#include<sstream>

using namespace std;

void sort(int * array, unsigned int size)
{
	for (unsigned int i = 0; i < (size-1); i++)
	{
		for (unsigned int j = 0; j < (size-1) - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array[j], array[j + 1]);
			}
		}
	}
}
bool read(int * array, unsigned int size)
{
	string mas;
	unsigned int i = 0, array_count = 0;
	getline(cin, mas);
	istringstream stream(mas);
	for (i; i < size; i++)
	{
		if (stream >> array[i])
		{
			array_count++;
		}
	}
	if (array_count == size && stream.eof()) return true;
	else return false;
}
void print(int * array, unsigned int size)
{
	for (unsigned int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
}

int main()
{
	unsigned int size;
	int * array;
	cin >> size;
	cin.get();
	array = new int[size];
	if (read(array, size))
	{
		sort(array, size);
		print(array, size);
		cin.get();
	}
	else
	{
		cout << "fail input ";
		cin.get();
	}
	delete[] array;
	return 0;
}

