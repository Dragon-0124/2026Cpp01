//	Two - Dimensional Arrays
/*
* 1. Using Only Stack Memory
*		
* 2. Using Both Stack and Heap Memory
	int* arr [4];
	cin >> colNums;
	for (int i = 0; i < 4 ; i++)
	{
	arr[i] = new int [colNums];
	}
* 3. Using Only Heap Memory
	cin >> rowNums;
	cin >> colNums;
	int** arr = new int* [rowNums];
	for (int i = 0; i < n + 1 ; i++)
	{
	arr[i] = new int[colNums]
	}
*/

#include <iostream>
using namespace std;

int main() {
	int rowColumns[3][5];

	for (int i = 0 ; i < 3; i++) {
		for (int j = 0; j < 5; j++)
				rowColumns[i][j] = i * j;
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++)
			cout << rowColumns[i][j] << "  ";
		cout << endl;
	}

	return 0;
}