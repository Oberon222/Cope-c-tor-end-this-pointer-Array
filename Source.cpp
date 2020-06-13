#include <iostream>
#include "Array.h"
#include <ctime>

using namespace std;



int main()
{
	Array myArr = 5;
	myArr.Filling_Rand();
	myArr.Print();
	myArr.operator++();
	myArr.Print();
	myArr.operator++();
	myArr.Print();
	myArr.operator--();
	myArr.Print();
	myArr.operator-();
	myArr.Print();
	myArr++;
	myArr.Print();
	myArr.operator()(3);
	myArr.Print();
	myArr.operator[](2);



	//myArr--;

	/*Array myArr2 = 7;
	myArr2.Filling_Rand();
	myArr2.Print();

	myArr.operator=(myArr2);
	myArr.Print();

	myArr.operator long();
	myArr.Print();*/



	myArr.operator char* ();










	system("pause");
	return 0;
}