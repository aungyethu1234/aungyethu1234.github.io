#include <iostream>
using namespace std;

int main(){
    
    int no_of_day, years, months, days;
    cout<<"Enter number of day: ";
    cin>>no_of_day;
    years = no_of_day / 365;
    int remain_day = (no_of_day%365);
    months = (remain_day/30);
    days = ((no_of_day%365)%30);

    cout<<"Years: "<<years;
    cout<<"\nMonths: "<<months;
    cout<<"\nDays: "<<days;




    return 0;
}