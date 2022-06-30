#include <iostream>
using namespace std;

int main() {
    int year;
    cout<<"Check leap year or not\n";
    cout<<"Enter year: ";
    cin>>year;

    if(year%4 == 0 && year%100 != 0) {
       cout<<year<<" is leap year";

    }
    
    else if(year%400 == 0 && year%100 == 0) {
        cout<<year<<" is leap year";
    }
    else {
        cout<<year<<" is not leap year";
    }

    return 0;
}