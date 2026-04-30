#include <iostream>
#include <cstring>
using namespace std;

int main() {
	//char s1[] = { 'A', 'B', 'C' }; //오류 발생
	//char s1[] = {'A', 'B', 'C', '\0' };
	//char s1[] = {'A', 'B', 'C', NULL };
	//char s1[] = {'A', 'B', 'C', 0 };
	//char s1[] = "ABC"; // 위의 3개와 같지만 더 간결한 방식
	char s1[] = {'A', 'B', 0, 'C'}; // B까지만 인식함
	
	cout << s1 << "\n" ;

	return 0;
}