#include <iostream>
using namespace std;

int main() {
    float bmi;
    cout<<"Enter your bmi value: ";
    cin>>bmi;
    if(bmi < 18.5){// one option
    cout<<"underweight";
    }
    else { // Total three options
        if(bmi >= 18.5 && bmi <= 24.9){ // one options
            cout<<"Normal Weight";
        }
        else {// 2 options
            if(bmi >= 25 && bmi <= 29.9){
                cout<<"Over Weight";
            }
            else{
                cout<<"Oversity";
            }

        }
    }
}