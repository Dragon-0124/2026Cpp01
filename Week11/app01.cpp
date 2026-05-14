#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
	string s1("abc");
	string s2 = "abcd";

	cout << (s1 == s2) << endl;
	cout << boolalpha << (s1 == s2) << endl;
	cout << (s1 == s2) << endl;
	
	cout << noboolalpha;
	cout << (s1 == s2) << endl; 
 
	//cin >> s2;
	//cout << s2 << endl;

	//getline(cin, s2. ' ');
	
	//cin에서 사용 후 남아있는 더미값을 제서해야 함
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	getline(cin, s2);
	cout << s2 << endl;
	
	
	
	return 0;
}