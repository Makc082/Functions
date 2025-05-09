#pragma once
namespace MySpace {

	void PrintArray(int* ar, int size);

	// ������� ��� ��������� ������� �������� ������.
	int* DeleteFirstElement(int*& ar, int& size);

	// ������� ��� ��������� ���������� �������� ������.
	int* DeleteEndElement(int*& ar, int& size);

	// ������� ��� ��������� �������� �� ��������.
	int* DeleteIndexElement(int*& ar, int& size, int index);

	// ������� ��� ��������� ��� �������� ������ 1.
	int* DeleteAllElements(int*& ar, int& size);

	// ������� ��� ��������� ��� �������� ������ 2.
	int* DelAllElemens(int*& ar, int& size);

	// ������� ��������� ��� ������ �������� ������.
	int* DelAllEvenElements(int*& ar, int& size);

	// ������� ��������� ��� �������� ������, �� ����� �� ��������.
	int* DelAllBigElements(int*& ar, int& size, int value);

	// ������� ��������� �������� �� ��������.
	int* AddIndexElement(int*& ar, int& size, int index, int value);

	// ������� ���������� ����������� ������� �� 1 �� N
	void FillArray(int*& ar, int& size, int value);

	// ������� ���������� ���������� ������������� ������.
	void AVGArray(int*& ar, int& size);

	// ������� ��� ������� �������� ������.
	int ProductArray(int*& ar, int& size);

	// ������� ���������� ������ �� ����������.
	void SortArray(int*& ar, int& size);
}