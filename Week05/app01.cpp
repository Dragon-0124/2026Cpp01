// heap memory : dynamic memory allocation
// 컴파일 하는 시점에 할당되는 다른 메모리와는 다르게 명령을 지시 하는 시점에 할당됨
#include <iostream>
using namespace std;

int main(){
    //int humans = 100;
    //int ages[humans];


    int age;
    //int* a = &age; // 포인터 변수는 메모리 번지 주소만 받을 수 있음

    int humans = 0;
    cout << "How many? -> ";
    cin >> humans;
    cout << endl;
    int* ages = new int[humans]; // allocate dynamic memory(heap memory)

    for (int i = 0; i < humans; i++){
        cout << endl << "How old?? -> ";
        cin >> age ;
        *(ages + i) = age; // age를 *(ages + i)의 주소에 기입
        }

    for (int i = 0; i < humans; i++) {
        cout << (ages+i) << "번지 " << *(ages + i) << "세" << endl ;
    }

    /*
    cout << ages << endl;
    cout << &humans << endl;
    cout << &ages << endl;
    */

    delete[] ages; // free memory
    ages = nullptr;

    // 지정해 주지 않으면 프로그램이 꺼졌을 때 OS단에서 누수를 막기위해 개입하지만 OS가 지원하지 않으면 메모리 공간을 계속 차지함

    return 0;
}