#include <iostream>

using namespace std;

class Area {
public:
    void calculate(double side) {
        cout << "Area of Square: " << (side * side) << endl;
    }
    void calculate(double length, double breadth) {
        cout << "Area of Rectangle: " << (length * breadth) << endl;
    }
    void calculate(float radius) {
        cout << "Area of Circle: " << (3.14159 * radius * radius) << endl;
    }
};

int main() {
    Area a;
    a.calculate(5.0);       // Square
    a.calculate(4.0, 6.0);  // Rectangle
    a.calculate(3.5f);      // Circle
    return 0;
}