#include <iostream>
using namespace std;
int findMax(int, int);
int findMax(int num1, int num2){
    return (num1 < num2) ? num2: num1;
}
int main() {
    int n1, n2;
    cout<<"Enter number1: ";
    cin>>n1;
    cout<<"Enter number2: ";
    cin>>n2;
    
    int max = findMax(n1, n2);
    cout<<"Max number is "<<max;

    return 0;
}