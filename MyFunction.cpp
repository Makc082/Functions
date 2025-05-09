#include <iostream>
#include <windows.h>
#include "MyHeader.h"
using namespace std;

int main() {
	srand(time(0));
	rand();


	int size = 10;
	int* ar = new int[size] {8, 7, 9, 4, 6, 1, 3, 5, 10, 2};
	MySpace ::PrintArray(ar, size);

	MySpace :: DeleteFirstElement(ar, size);
	MySpace :: PrintArray(ar, size);

	MySpace::DeleteEndElement(ar, size);
	MySpace::PrintArray(ar, size);

	MySpace:: DeleteIndexElement(ar, size, 5);
	MySpace:: PrintArray(ar, size);

	MySpace:: DeleteAllElements(ar, size);
	MySpace:: PrintArray(ar, size);

	MySpace:: DelAllElemens(ar, size);
	MySpace:: PrintArray(ar, size);

	MySpace::DelAllEvenElements(ar, size);
	MySpace::PrintArray(ar, size);

	MySpace:: DelAllBigElements(ar, size, 8);
	MySpace::PrintArray(ar, size);

	MySpace:: AddIndexElement(ar, size, 4, 14);
	MySpace:: PrintArray(ar, size);

	MySpace:: FillArray(ar, size, 15);
	MySpace:: PrintArray(ar, size);

	MySpace:: AVGArray(ar, size);

	MySpace:: SortArray(ar, size);
	MySpace:: PrintArray(ar, size);

	int result = MySpace :: ProductArray(ar, size);
	cout << result << "\n";

	delete[] ar;
}