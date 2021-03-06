// SPO1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Allocator.cpp"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int size;
	int count;
	do {
		//cin >> size;
		size = 4096;
		if (size<0 || ((size_t)size<=sizeof(tag))) {
			cout << "Incorrect size! Please try again\n";
		}
	} while (size<0||((size_t)size<=sizeof(tag)));
	do {
		//cin >> count;
		count = 1000;
		if (count<0) {
			cout << "Incorrect count! Please try again\n";
		}
	} while (count<0);
	size_t mem_size = (size_t)size;
	Allocator alloc(size);
	alloc.mem_test(count);
	system("pause");
	return 0;
}

