#include <iostream>
#include <string>
using namespace std;

class Customer {
   private:
    string customerName;
    string productBought;
    double paidAmount;

   public:
    void input() {
        cout << "Enter customer name: ";
        getline(cin, customerName);
        cout << "Enter product bought: ";
        getline(cin, productBought);
        cout << "Enter paid amount: ";
        cin >> paidAmount;
    }

    void applyDiscount() {
        if (paidAmount > 20000) {
            paidAmount *= 0.95; 
        }
    }

    void display() {
        cout << "Customer Name: " << customerName << endl;
        cout << "Product Bought: " << productBought << endl;
        cout << "Paid Amount: " << paidAmount << endl;
    }
};

int main() {
    Customer customer;

    customer.input();

    customer.applyDiscount();

    customer.display();

    return 0;
}