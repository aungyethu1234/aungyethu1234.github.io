#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    cout<<"\n_____________ cctype library function _________\n"; // to ask
    cout<<"(9 is alpha?): "<<isalpha('9');
    cout<<"\n(A is alpha?): "<<isalpha('A');
    cout<<"\n(9 is digit?): "<<isdigit('9');
    cout<<"\nLower case of 'A': "<<char(tolower('A'));

    cout<<"\n_______ cmath library function ____\n";
    cout<<"3 power 5: "<<pow(3,5);
    cout<<"\nsqrt of 36: "<<sqrt(36);
    cout<<"\nValue of sin(30): "<<sin(30);
    cout<<"\nValue of log(10): "<<log(10);

    cout<<"\n ___________ iomanip library function ____\n";
    cout<<"Spring"<<setw(20)<<"Day";
    cout<<"\nLove"<<setw(20)<<"Yourself";

    

    
    return 0;
}