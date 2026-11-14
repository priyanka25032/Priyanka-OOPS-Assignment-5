#include <iostream>
#include <string>

using namespace std;

class StudentMarks {
public:
    void result(string subject, int marks) {
        cout << "Marks in " << subject << ": " << marks << endl;
    }
    void result(double sub1, double sub2) {
        double avg = (sub1 + sub2) / 2.0;
        cout << "Average of two subjects: " << avg << endl;
    }
    void result(double sub1, double sub2, double sub3) {
        double avg = (sub1 + sub2 + sub3) / 3.0;
        cout << "Average of three subjects: " << avg << endl;
    }
};

int main() {
    StudentMarks sm;
    sm.result("Mathematics", 88);
    sm.result(85.0, 90.5);
    sm.result(80.0, 75.5, 90.0);
    return 0;
}