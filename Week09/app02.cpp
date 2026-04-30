#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	// Declaration of an array of strings
	char lines[80];

	cout << "Enter a line of characters: ";
	cin.getline(lines, 80); // only Enter as the delimiter
	//cin >> lines; // tap, space, Enter as the delimiter
	
	// Outputting lines
	cout << endl;
	cout << "<Output>" << endl;

	cout << lines << endl;

	return 0;
}