#include <iostream>
using namespace std;

void changeValue(int val) {
    val = val + 20;
    cout<<"\nValue inside function: "<<val;
}

void changeAnother(int *val) {
    *val = *val + 20;
    cout<<"\nValue inside function: "<<(*val);
}

int main() {

    int num = 10;
    cout<<"Before calling function, num = "<<num;
    changeValue(num);
    cout<<"\nAfter calling funciton, num = "<<num;

    int num1 = 10;
    cout<<"\nBefore calling function, num1 = "<<num1;
    changeAnother(&num1);
    cout<<"\nAfter calling function, num1 = "<<num1;
    

    return 0;
}