// stack memory : parameters, local variables
// static(data) memory : global object, static object
// heap memory : dynamic memory allocation (allocate at running time)

#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
    static int count;  // static object

public:
    // constructor
    Circle() : radius(0){
        cout << this << "원 객체 생성 (기본 생성자)\n";
        count++;
    }
    Circle(double r) {
        cout << this << "원 객체 생성 (매개변수 생성자)\n";
        radius = r;
        count++;
    }
    Circle(const Circle& c) {
        cout << this << "원 객체 생성 (복사 생성자)\n";
        radius = c.radius;
        count++;
    }

    ~Circle() {
        cout << this << "원 객체 소멸\n";
        count--;
    } 
    
    // inline member function
    double getRadius() const {
        return radius;
    }
    double getArea() const {
        const double PI = 3.14;
        return (PI * radius * radius);
    }
    double getPerimeter() const {
        const double PI = 3.14;
        return (2 * PI * radius);
    }
    void setRadius(double value);  // inline O

    static int getCount();
};

int Circle::count = 0;

int Circle::getCount() {
    return count;
}

inline void Circle::setRadius(double value)
{
    radius = value;
}

Circle circle5;  // global object

Circle* test() {
    Circle circle6(2.0);
    cout << "Radius of circle6 : " << circle6.getRadius() << endl;
    cout <<  "현재 남아있는 원 : " <<Circle::getCount() << "개\n";
    
    Circle* circle7 = new Circle(circle6) ; // allocate Heap memory
    cout << "현재 남아있는 원 : " << Circle::getCount() << "개\n";
    //cout << "Radius of circle7 : " << circle7.getRadius() << endl; // error. circle7 is not object, local pointer
    cout << "Radius of circle7 : " << circle7->getRadius() << endl; // circle7->getRadius() ≒ (*circle7).getRadius() 

    return circle7;
}

int main()
{
    cout <<  "현재 남아있는 원 : " <<Circle::getCount() << "개\n";

    Circle circle1;
    circle1.setRadius(10.0);
    cout << "현재 남아있는 원 : " << Circle::getCount() << "개\n";
    cout << "Radius of circle1 : " << circle1.getRadius() << endl;
    cout << "Area of circle1 : " << circle1.getArea() << endl;
    cout << "Perimeter of circle1 : " << circle1.getPerimeter() << endl << endl;


    Circle* pointer = test(); // circle7이라는 이름은 지역 포인트 변수여서 test() 종료 후 삭제되었지만 주소는 남아있음
    cout << "현재 남아있는 원 : " << Circle::getCount() << "개\n";
    cout << "Radius of pointer : " << pointer->getRadius() << endl;
    cout << "Area of pointer : " << pointer->getArea() << endl; // 그 주소에 있는 데이터를 가져올 수 있음(heap memory가 살아있음)
    delete pointer; // 힙메모리에 할당된 객체를 삭제(소멸자 동작)
    pointer = nullptr; // 포인터가 가지고 있던 힙메모리 번지 주소를 초기화
    

    cout <<  "현재 남아있는 원 : " <<Circle::getCount() << "개\n";

    Circle circle2;
    circle2.setRadius(20.0);
    cout << "Radius of circle2 : " << circle2.getRadius() << endl;
    cout << "Area of circle2 : " << circle2.getArea() << endl;
    cout << "Perimeter of circle2 : " << circle2.getPerimeter() << endl << endl;

    Circle circle3(5.0);
    cout << "현재 남아있는 원 : " << Circle::getCount() << "개\n";

    Circle circle4(circle2);
    cout << "현재 남아있는 원 : " << Circle::getCount() << "개\n";
    cout << "Radius of circle4 : " << circle4.getRadius() << endl;

    //cout << circle4.getCount() << "개\n"; // getCount도 Circle클래스의 멤버함수로 인스턴스.getCount() 가능
    //cout << circle6.getCount() << "개\n"; // 이미 소멸된 객체라 사용 불가. 오류발생
    return 0;
}