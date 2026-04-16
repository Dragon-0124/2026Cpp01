#pragma once
#include <iostream>
using namespace std;

// 2D Array Heap memory only
inline int heapOnly() {
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