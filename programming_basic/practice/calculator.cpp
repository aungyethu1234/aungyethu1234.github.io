#include <iostream>
using namespace std;

int num1, num2, result;
char op;

int doAdd();
int doSubstract();
int doMulti();
int doDiv();
void getData();


int main() {
    getData();
    return 0;
}

void getData() {
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Type +, -, * or / operator: ";
    cin>>op;
    cout<<"Enter number 2: ";
    cin>>num2;
    cout<<"....... Result ............\n";
    
    switch (op) {
        case '+' :
            cout<<doAdd();
            break;
        case '-' :
            cout<<doSubstract();
            break;
        case '*' :
            cout<<doMulti();
            break;
        case '/' : 
            cout<<doDiv();
            break;
        default :
            cout<<"Operator is not Correct!";
            break;
    }
}

int doAdd() {
    result = (num1 + num2);
    return result;
}
int doSubstract() {
    result = (num1 - num2);
    return result;
}

int doMulti() {
    result = (num1 * num2);
    return result;
}

int doDiv() {
    result = (num1 / num2);
    return result;
}



