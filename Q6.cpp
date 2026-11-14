#include <iostream>

using namespace std;

class Bill {
public:
    double calculateBill(int quantity, double unitPrice) {
        return quantity * unitPrice;
    }
    double calculateBill(int qty1, double price1, int qty2, double price2) {
        return (qty1 * price1) + (qty2 * price2);
    }
    double calculateBill(double totalAmount, double discountPercentage) {
        double discount = (totalAmount * discountPercentage) / 100.0;
        return totalAmount - discount;
    }
};

int main() {
    Bill b;
    double bill1 = b.calculateBill(3, 150.0);
    cout << "Bill for Item 1: " << bill1 << endl;
    
    double bill2 = b.calculateBill(2, 100.0, 4, 50.0);
    cout << "Bill for Two Items: " << bill2 << endl;
    
    double finalBill = b.calculateBill(400.0, 10.0); // 10% discount on 400
    cout << "Final bill after 10% discount: " << finalBill << endl;
    return 0;
}