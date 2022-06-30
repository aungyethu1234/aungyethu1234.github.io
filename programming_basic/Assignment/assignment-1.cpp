#include <iostream>
using namespace std;

int main(){

    int loan_amount, rate, no_of_month, monthly_intrest, total_interest, c ;
    cout<<"Enter loan amount: ";
    cin>>loan_amount; //100000
    cout<<"Enter rate: "; 
    cin>>rate; //10
    cout<<"Enter number of month: "; 
    cin>>no_of_month; //3
   
    total_interest = (loan_amount * no_of_month *rate)/100; //30000
    monthly_intrest = total_interest / (no_of_month);

    cout<<"Monthly Interest: "<<monthly_intrest;
    cout<<"\nYour Interest: "<<total_interest;

    getchar();
    return 0;

}