#include <iostream>
using namespace std;

int main() {
    int price, qty, expense,discount, total;
    cout<<"Enter price: ";
    cin>>price;
    cout<<"Enter quantity: ";
    cin>>qty;
    expense = (price * qty);
    if(expense > 5000) {
        discount = (expense * 10)/100;
        total = expense - discount;
        cout<<"Total Expense: "<<total;

    }
    else {
        cout<<"Total Expense: "<<expense;
    }

}