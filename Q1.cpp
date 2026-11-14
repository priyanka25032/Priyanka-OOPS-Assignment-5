#include <iostream>
#include <string>

using namespace std;

class Print {
public:
    void display(int a) {
        cout << "Integer value: " << a << endl;
    }
    void display(double a) {
        cout << "Double value: " << a << endl;
    }
    void display(string a) {
        cout << "String value: " << a << endl;
    }
};

int main() {
    Print p;
    p.display(42);
    p.display(3.1415);
    p.display("Hello C++");
    return 0;
}