#include <iostream>

using namespace std;

class Maximum {
public:
    int findMax(int a, int b) {
        return (a > b) ? a : b;
    }
    int findMax(int a, int b, int c) {
        return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    }
    double findMax(double a, double b) {
        return (a > b) ? a : b;
    }
};

int main() {
    Maximum m;
    cout << "Max of 10 and 20: " << m.findMax(10, 20) << endl;
    cout << "Max of 12, 45, and 23: " << m.findMax(12, 45, 23) << endl;
    cout << "Max of 15.5 and 12.3: " << m.findMax(15.5, 12.3) << endl;
    return 0;
}