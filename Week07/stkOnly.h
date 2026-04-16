#pragma once
#include <iostream>
using namespace std;

// 2D Array Stack memory only
inline int stkOnly() {
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
