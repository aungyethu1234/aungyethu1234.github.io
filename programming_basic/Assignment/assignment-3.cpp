#include <iostream>
using namespace std;

int main(){
    int price, discount, discount_value, total_amount;
    cout<<"Enter product price: ";
    cin>>price; //15000
    cout<<"Enter discount value: "; 
    cin>>discount_value; //10
    discount = (price * discount_value)/100;
    total_amount = price - discount;
    //output
    cout<<"After discount, price: "<<total_amount;




    return 0;
}