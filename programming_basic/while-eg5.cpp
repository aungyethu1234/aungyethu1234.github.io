#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"\nIf you entered zero, program terminate";
    

    while(num != 0) {
        cout<<"\nEnter number: ";
        cin>>num;
        if(num > 0) {
            cout<<num<<" is positive number";
        }
        else if(num < 0) {
            cout<<num<<" is negative number";
        }
    }



    return 0;
}