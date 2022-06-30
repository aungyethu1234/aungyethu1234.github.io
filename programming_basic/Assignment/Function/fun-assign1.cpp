#include <iostream>
using namespace std;
int  calculateDiscountItem(int, int);
void calculateInterest(int, int, int);
void countZeroOccurence();

int main() {
    // Start discount program
    int p, d, discount;
    cout<<"Discount Program\n";
    cout<<"\n";
    cout<<"Enter Price: ";
    cin>>p;
    cout<<"Enter discount value: ";
    cin>>d;
    discount = calculateDiscountItem(p, d);
    cout<<"After discount, price: "<<discount<<"\n";
    cout<<"-------------------------------------\n";
    // End discount program

    // start interest program
    int Loan_Amt, rate, month;
    cout<<"Interest Program\n";
    cout<<"\n";
    cout<<"Enter Loan amount: ";
    cin>>Loan_Amt;
    cout<<"Enter interest value: ";
    cin>>rate;
    cout<<"Enter number of month: ";
    cin>>month;
    calculateInterest(Loan_Amt, rate, month);
    // End interest program

    // start Zero Count program
    countZeroOccurence();
    return 0;
}

int calculateDiscountItem(int price, int discount) {
    int dis_res, dis;
    dis = (price * discount)/100;
    dis_res = (price - dis);
    return dis_res;

}

void calculateInterest(int loanAmt, int interestRate, int noOfMonth) {
    int monthly_interest, t_interest;
    t_interest = (loanAmt * interestRate * noOfMonth)/100;
    monthly_interest = t_interest / noOfMonth;
    cout<<"\n";
    cout<<"Monthly interest: "<<monthly_interest<<"\n";
    cout<<"Total interest: "<<t_interest<<"\n";
    cout<<"\n";
    cout<<"----------------------------------\n";


}

void countZeroOccurence() {
    cout<<"Zero Count Program\n";
    cout<<"\n";
    int num, inp_num, zCount = 0, c = 1;
    cout<<"How many number you want to type: ";
    cin>>num;
    for(int i = 0; i < num; i++) {
        cout<<c++<<". "<<"Enter any number: ";
        cin>>inp_num;
        //Start zero count statement
        if(inp_num == 0) {
            zCount++;
        }
        
}

cout<<"Number of zero: "<<zCount<<"\n";
cout<<"-------------------------\n";
//End zero count
}

