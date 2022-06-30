#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter any number: ";
    cin>>num;
    //verify divisible by 5 or 3
    if(num%3 == 0 || num%5 == 0) {
        if(num%3 == 0 && num%5 == 0){
            cout<<"num is divisible both 3 and 5";
        }
        if(num%3 == 0 && num%5 != 00){
            cout<<"num is divisible only 3";
        }
        if(num%5 == 0 && num%3 != 0){
            cout<<"num is only divisible only 5";
        }
    }
    else {
        cout<<"num is not divisible both 3 and 5";
    }
}