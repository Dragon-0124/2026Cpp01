// heap memory : dynamic memory allocation
// 컴파일 하는 시점에 할당되는 다른 메모리와는 다르게 명령을 지시 하는 시점에 할당됨
#include <iostream>
using namespace std;

int main(){

    int age, totalPrice = 0;
    int humans = 0;
    cout << "How many? -> ";
    cin >> humans;
    cout << endl;
    int* ages = new int[humans]; // 포인터 변수는 메모리 주소만 받을 수 있음 -> int* ages

    for (int i = 0; i < humans; i++){
        cout << endl << "How old?? -> ";
        cin >> age ;
        *(ages + i) = age; // age를 *(ages + i)의 주소에 기입
        }

    int kid = 5000, adult = 10000, senior = 7000;

    for (int i = 0; i < humans; i++) {
        age = (*ages + i); 
        //age = ages[i];    // 포인터는 배열처럼,  배열은 포인터처럼 사용 가능
        if (age >= 65)
            totalPrice = totalPrice + senior;
        else if (age >= 19)
            totalPrice = totalPrice + adult;
        else
            totalPrice = totalPrice + kid;
    }

    cout << "Total Price : " << totalPrice << endl;

    /*
    cout << ages << endl;
    cout << &humans << endl;
    cout << &ages << endl;
    */

    delete[] ages; // free memory
    ages = nullptr; // 메모리는 반납됐지만 메모리 주소는 가지고 있기 때문에 일어날 수 있는 오류 방지

    // 지정해 주지 않으면 프로그램이 꺼졌을 때 OS단에서 누수를 막기위해 개입하지만 OS가 지원하지 않으면 메모리 공간을 계속 차지함

    return 0;
}