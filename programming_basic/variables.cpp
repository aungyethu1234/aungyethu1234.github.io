#include <iostream>
using namespace std;
int a = 10; //global variable

void display(){
    int a = 20; // local variable
    cout<<"\nValue of a inside function: "<<a<<"\n";
}
void displayAnother(int a){// parameter (local variable)
    cout<<"Value of a inside fun parameter: "<<a<<"\n";
}
int main(){
cout<<"\n Value of a: "<<a;
display();
displayAnother(100);

    
}