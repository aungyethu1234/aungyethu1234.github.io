#include <iostream>
using namespace std;

int main() {
    float bmi;
    cout<<"Enter bmi value: ";
    
    if(bmi < 18.5) {
        cout<<"Underweight";
    }
    else if(bmi >= 18.5 && bmi <= 24.9) {
        cout<<"Normal weight";
    }
    else if(bmi >= 25 && bmi <= 29.9) {
        cout<<"over Weight";
    }
    else {
        cout<<"Obesity";
    }

    return 0;
}