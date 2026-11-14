#include <iostream>

using namespace std;

class Calculator {
public:
    int sum(int a, int b) {
        return a + b;
    }
    int sum(int a, int b, int c) {
        return a + b + c;
    }
    double sum(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    cout << "Sum of 5 and 10: " << calc.sum(5, 10) << endl;
    cout << "Sum of 3, 4, and 5: " << calc.sum(3, 4, 5) << endl;
    cout << "Sum of 4.5 and 5.5: " << calc.sum(4.5, 5.5) << endl;
    return 0;
}