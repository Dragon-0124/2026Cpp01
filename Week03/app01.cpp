#include <iostream>
using namespace std;


class Circle
{
private:
    double radius;
public:
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
    void setRadius(double value);
};

// setRadius 멤버 함수의 정의
void Circle::setRadius(double value)
{
    radius = value;
}

int main()
{
    // 첫 번째 circle 객체를 만들고 멤버 함수 호출
    cout << "Circle 1" << endl;
    Circle circle1;
    circle1.setRadius(10.0);
    cout << "radius : " << circle1.getRadius() << endl;
    cout << "Area : " << circle1.getArea() << endl;
    cout << "Perimeter : " << circle1.getPerimeter() << endl << endl;
    // 두 번째 circle 객체를 만들고 멤버 함수 호출  
    cout << "Circle 2" << endl;
    Circle circle2;
    circle2.setRadius(20.0);
    cout << "radius : " << circle2.getRadius() << endl;
    cout << "Area : " << circle2.getArea() << endl;
    cout << "Perimeter : " << circle2.getPerimeter() << endl << endl;
    return 0;
}