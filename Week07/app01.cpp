
/*
* Two - Dimensional Arrays
* 1. Using Only Stack Memory
* 2. Using Both Stack and Heap Memory
* 3. Using Only Heap Memory
*/
#include <iostream>
using namespace std;

// 2D Array Stack memory only
int stkOnly() {
	int rowColumns[3][5];

	cout << "2D Array - Stack only" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++)
			rowColumns[i][j] = i * j;
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++)
			cout << rowColumns[i][j] << "  ";
		cout << endl;
	}
	cout << "\n";

	return 0;
}

// 2D Array Stack & Heap memory
int stkheap() {
	int columns = 0;
	int* arr[3] = { nullptr, nullptr, nullptr };

	cout << "2D Array - Stack & Heap" << "\n";

	cout << "row : 3 , col? -> ";
	cin >> columns;

	for (int i = 0; i < 3; i++)
		arr[i] = new int[columns];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < columns; j++)
			arr[i][j] = i * j;
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < columns; j++)
			cout << arr[i][j] << "  ";
		cout << "\n";
	}
	cout << "\n";

	for (int i = 0; i < 3; i++) {
		delete[] arr[i];
		arr[i] = nullptr;
	}
	cout << "\n";

	return 0;
}

// 2D Array Heap memory only
int heapOnly() {
	int rows = 0, cols = 0;
	int** arr = nullptr;


	cout << "2D Array - Heap only" << "\n";
	cout << "rows? : "; cin >> rows;	cout << "\n";
	cout << "cols? : "; cin >> cols; cout << "\n";

	arr = new int* [rows];

	for (int i = 0; i < rows; i++)
		arr[i] = new int[cols];

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
			arr[i][j] = i * j;
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
			cout << arr[i][j] << "  ";
		cout << "\n";
	}

	for (int i = 0; i < rows; i++) {
		delete[] arr[i];
		arr[i] = nullptr;
	}
	delete[] arr;
	arr = nullptr;

	return 0;
}

int main() {

	stkOnly();

	stkheap();

	heapOnly();

	return 0;
}