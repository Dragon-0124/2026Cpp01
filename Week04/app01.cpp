// stack memory. static(data) memory
// stack memory : parameter, local variable
// static(data) memory : global / static object

#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
    static int count; // static object
public:
    // constructor
    Circle() {
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

int Circle::count = 0; // :: -> 범위지정 연산자
int Circle::getCount() {
    return count;
}

inline void Circle::setRadius(double value)
{
    radius = value;
}

Circle circle5; // 전역 변수

void test() {
    Circle circle6(2.0); 
    cout << Circle::getCount() << "개" << endl << endl;
}

int main()
{
    cout << Circle::getCount() << "개" << endl;
    Circle circle1;
    circle1.setRadius(10.0);
    cout << "Radius: " << circle1.getRadius() << endl;
    cout << "Area: " << circle1.getArea() << endl;
    cout << "Perimeter: " << circle1.getPerimeter() << endl << endl;

    cout << Circle::getCount() << "개" << endl << endl;

    test();

    cout << Circle::getCount() << "개" << endl << endl;

    Circle circle2;
    circle2.setRadius(20.0);
    cout << "Radius: " << circle2.getRadius() << endl;
    cout << "Area: " << circle2.getArea() << endl;
    cout << "Perimeter: " << circle2.getPerimeter() << endl << endl;

    Circle circle3(5.0);

    Circle circle4(circle2);
    cout << "Radius: " << circle4.getRadius() << endl;

    return 0;
}