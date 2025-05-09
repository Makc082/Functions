#pragma once
namespace MySpace {

	void PrintArray(int* ar, int size);

	// функція для видалення першого елемента масиву.
	int* DeleteFirstElement(int*& ar, int& size);

	// функція для видалення останнього елемента масиву.
	int* DeleteEndElement(int*& ar, int& size);

	// функція для видалення елемента за індексом.
	int* DeleteIndexElement(int*& ar, int& size, int index);

	// функція для видалення всіх елементів масиву 1.
	int* DeleteAllElements(int*& ar, int& size);

	// функція для видалення всіх елементів масиву 2.
	int* DelAllElemens(int*& ar, int& size);

	// функція видалення всіх парних елементів масиву.
	int* DelAllEvenElements(int*& ar, int& size);

	// функція видалення всіх елементів масиву, які більші за значення.
	int* DelAllBigElements(int*& ar, int& size, int value);

	// функція додавання елемента за індексом.
	int* AddIndexElement(int*& ar, int& size, int index, int value);

	// функція заповнення послідовними числами від 1 до N
	void FillArray(int*& ar, int& size, int value);

	// функція обчислення середнього арифметичного масиву.
	void AVGArray(int*& ar, int& size);

	// функція для добутку елементів масиву.
	int ProductArray(int*& ar, int& size);

	// функція сортування масиву за зростанням.
	void SortArray(int*& ar, int& size);
}