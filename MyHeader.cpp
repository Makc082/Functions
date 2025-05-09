#include <iostream>
#include <Windows.h>
using namespace std;
namespace MySpace {
SetConsoleOutputCP(1251);
	void PrintArray(int* ar, int size) {
		for (int i = 0; i < size; ++i) {
			//ar[i] = rand() % 100;

			cout << ar[i] << ", ";
		}
		cout << "\n";

	}

	// ôóíêö³ÿ äëÿ âèäàëåííÿ ïåðøîãî åëåìåíòà ìàñèâó.
	int* DeleteFirstElement(int*& ar, int& size) {
		if (size <= 0) return ar;
		int* temp = new int[size - 1];
		memcpy(temp, ar + 1, size * sizeof(int));
		delete[] ar;
		--size;
		ar = temp;
		return ar;
	}

	// ôóíêö³ÿ äëÿ âèäàëåííÿ îñòàííüîãî åëåìåíòà ìàñèâó.
	int* DeleteEndElement(int*& ar, int& size) {
		if (size <= 0) return ar;
		int* temp = new int[size - 1];
		memcpy(temp, ar, size * sizeof(int));
		delete[] ar;
		--size;
		ar = temp;
		return ar;
	}

	// ôóíêö³ÿ äëÿ âèäàëåííÿ åëåìåíòà çà ³íäåêñîì.
	int* DeleteIndexElement(int*& ar, int& size, int index) {
		if (index >= 0 && index < size) {
			int* temp = new int[size - 1];
			memcpy(temp, ar, index * sizeof(int));
			memcpy(temp + index, ar + index + 1, (size - index - 1) * sizeof(int));
			delete[] ar;
			ar = temp;
			--size;
			return ar;
		}
		else {
			cout << "Invalid index\n";
			return ar;
		}
	}

	// ôóíêö³ÿ äëÿ âèäàëåííÿ âñ³õ åëåìåíò³â ìàñèâó 1.
	int* DeleteAllElements(int*& ar, int& size) {
		if (size < +0) return ar;
		int* temp = new int[size] {};
		delete[] ar;
		ar = temp;
		return ar;
	}

	// ôóíêö³ÿ äëÿ âèäàëåííÿ âñ³õ åëåìåíò³â ìàñèâó 2.
	int* DelAllElemens(int*& ar, int& size) {
		int* temp = new int[size];
		for (int i = 0; i < size; ++i) {
			temp[i] = 0;
		}
		delete[] ar;
		ar = temp;
		return ar;
	}

	// ôóíêö³ÿ âèäàëåííÿ âñ³õ ïàðíèõ åëåìåíò³â ìàñèâó.
	int* DelAllEvenElements(int*& ar, int& size) {
		int* temp = new int[size];
		int j = 0;
		for (int i = 0; i < size; ++i) {
			if (ar[i] % 2 != 0) {
				temp[j] = ar[i];
				j++;
			}
		}
		delete[] ar;
		ar = temp;
		size = j;
		return ar;
	}

	// ôóíêö³ÿ âèäàëåííÿ âñ³õ åëåìåíò³â ìàñèâó, ÿê³ á³ëüø³ çà çíà÷åííÿ.
	int* DelAllBigElements(int*& ar, int& size, int value) {
		int* temp = new int[size];
		int j = 0;
		for (int i = 0; i < size; i++) {
			if (ar[i] <= value) {
				temp[j] = ar[i];
				j++;
			}
		}
		delete[] ar;
		ar = temp;
		size = j;
		return ar;
	}

	// ôóíêö³ÿ äîäàâàííÿ åëåìåíòà çà ³íäåêñîì.
	int* AddIndexElement(int*& ar, int& size, int index, int value) {
		if (index >= 0 && index <= size) {
			int* temp = new int[size + 1];
			memcpy(temp, ar, index * sizeof(int));
			temp[index] = value;
			memcpy(temp + index + 1, ar + index, (size - index) * sizeof(int));
			delete[] ar;
			ar = temp;
			size++;
			return ar;
		}
		else {
			cout << "Invalid index\n";
			return ar;
		}
	}
	// ôóíêö³ÿ çàïîâíåííÿ ïîñë³äîâíèìè ÷èñëàìè â³ä 1 äî N
	void FillArray(int*& ar, int& size, int value) {
		if (size > 0 && size < 1000000) {
			delete[] ar;
			size = value;
			ar = new int[size];
			for (int i = 0; i < size; ++i) {
				ar[i] = i + 1;
			}
		}
		else {
			cout << "Invalid size\n";
		}
	}
	// ôóíêö³ÿ îá÷èñëåííÿ ñåðåäíüîãî àðèôìåòè÷íîãî ìàñèâó.
	void AVGArray(int*& ar, int& size) {
		float sum = 0;
		for (int i = 0; i < size; ++i) {
			sum += ar[i];
		}
		float avg = sum / size;
		cout << "Average: " << avg << "\n";
	}

	// ôóíêö³ÿ äëÿ äîáóòêó åëåìåíò³â ìàñèâó.
	int ProductArray(int*& ar, int& size) {
		int pr = 1;
		for (int i = 0; i < size; ++i) {
			pr *= ar[i];
		}
		return pr;
	}

	// ôóíêö³ÿ ñîðòóâàííÿ ìàñèâó çà çðîñòàííÿì.
	void SortArray(int*& ar, int& size) {
		for (int i = 0; i < size - 1; ++i) {
			for (int j = 0; j < size - i - 1; ++j) {
				if (ar[j] > ar[j + 1]) {
					int temp = ar[j];
					ar[j] = ar[j + 1];
					ar[j + 1] = temp;
				}
			}
		}
	}
}
