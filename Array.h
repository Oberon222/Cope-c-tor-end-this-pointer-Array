#pragma once
#include <iostream>
using namespace std;

class Array
{
	int* arr; // dynamic data
	int size;

public:
	Array();
	
	Array(int size);

	Array(const Array& other);
	

	~Array();
	//copy constructor, destructor, methods...

	void Filling_Rand();

	void Print() const;

	void AddItem(int newItem);
	void DeleteItem(int delItem);
	void SortItems()const;
	void Averege();

	Array operator++();
	Array operator++(int);
	Array operator--();
	Array operator--(int);

	Array operator-();

	Array operator=(const Array&other);

	operator long();

	operator char* ();



	
};
