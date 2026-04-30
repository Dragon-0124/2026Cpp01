#include <iostream>
#include <cstring>
using namespace std;

int main() {
	//char s1[] = { 'A', 'C', 'E', '\0' };
	//char s1[] = { 'A', 'C', 'E'};  // !!!
	//char s1[] = { 'A', 'C', 'E', NULL };	
	//char s1[] = { 'A', 'C', 'E', 0 };
	char s1[] = "ACE";
	char* ps1 = s1;
	cout << s1 << '\n';			//ACE
	cout << *ps1 << '\n';		//A
	cout << ps1 << '\n';		//ACE
	cout << *s1 << '\n';		//A
	cout << s1[1] << '\n';		//C
	cout << *(ps1+1) << '\n';	//C

	*(ps1 + 2) = 'Z';
	cout << s1 << '\n';			//ACE
	return 0;
}