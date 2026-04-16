#pragma once
#include <iostream>
using namespace std;

// 2D Array Stack & Heap memory
inline int stkHeap() {
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