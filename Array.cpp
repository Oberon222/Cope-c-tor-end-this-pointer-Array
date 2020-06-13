#include <iostream>
#include "Array.h"
#include <ctime>
using namespace std;


Array::Array()
{
	arr = nullptr;
	size = 0;
}
Array::Array(int size)
{
	this->size = size;
	arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
}

Array::Array(const Array &other) // конструктор копіювання
{
	this->size = other.size;
	this->arr = new int[other.size];
	for (int i = 0; i < other.size; i++) {
		this->arr[i] = other.arr[i];
	}

}


Array::~Array() {
	if (arr != nullptr) delete[]arr;

}

void Array::Filling_Rand()
{
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 50;
	}
}

void Array::Print() const
{
	if (arr != nullptr) {

		cout << "Array (size=" << size << "): ";
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << ", ";
		}
		cout << endl;
	}
	  
} 

void Array::AddItem(int newItem)
{
	int* newArr = new int[size + 1];
	for (int i = 0; i < size; i++) {
		newArr[i] = arr[i];
	}
	newArr[size] = newItem;
	delete[] arr;
	arr = newArr;
	++size;

}

void Array::DeleteItem(int delItem)
{
	if (delItem > 0 && delItem <= size) {
		
		for (int i = delItem-1; i < size-1; i++) {
			arr[i] = arr[i + 1];
		}
		size--;

	}

}

void Array::SortItems()const
{
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

void  Array::Averege()
{
	int suma=0;
	for (int i = 0; i < size; i++) {
		suma += arr[i];

	}
	cout<< "Averege = "<< suma / size <<endl;
}

Array Array::operator++()
{
	for (int i = 0; i < this->size; i++) {
		arr[i]++;
	}
	return Array(*this);
}

Array Array::operator++(int)
{
	Array tmp = *this;
		for (int i = 0; i < this->size; i++) {
			this->arr[i]++;
		}

	return tmp;
}

Array Array::operator--()
{
	for (int i = 0; i < this->size; i++) {
		arr[i]--;
	}
	return Array(*this);
}

Array Array::operator--(int)
{
	Array tmp = *this;
	for (int i = 0; i < this->size; i++) {
		this->arr[i]--;
	}

	return tmp;
}

Array Array::operator-()
{
	for (int i = 0; i < this->size; i++) {
		this->arr[i] *= -1;
	}
	return Array(*this);
}

Array Array::operator=(const Array& other)  
{
	this->size = other.size;
	this->arr = new int[other.size];
	for (int i = 0; i < other.size; i++) {
		this->arr[i] = other.arr[i];
	}
		
	return Array(*this);
}

char Array::operator[](int index)
{
	if (index >= 0 && index < size) 
	
	return arr[index];
}

void Array::operator()(int number)
{
	if (number > 0) {
		for (int i = 0; i < size; i++) {
			arr[i] += number;
		}
	}
}


Array::operator long()
{
	int suma=0;
	for (int i = 0; i < size; i++) {
		suma += arr[i];
	}

	return suma;
}

Array::operator char* ()
{
	char* tmp = new char[this->size];
	for (int i = 0; i < this->size; i++) {
		tmp[i] = (char)arr[i];

	}

	return tmp;
}




