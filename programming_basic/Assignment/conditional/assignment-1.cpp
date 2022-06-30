#include <iostream>
using namespace std;

int main() {

    int number;
    cout<<"Check positive number or negative number"<<endl;
    cout<<"========================================"<<endl;
    cout<<"Enter non-zero any number: ";
    cin>>number;
    
    if(number == 0) {
        cout<<"Zero is neither positive nor negative! try another number";
    }
    else if(number < 0) {
        cout<<number<<" is negative number";
    }
    else {
        cout<<number<<" is positive number";
    }


    return 0;
}