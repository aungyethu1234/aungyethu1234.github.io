#include <iostream>
using namespace std;

int main() {

    int a, b;
    a = 2;
    b = 7;
    cout<<"a = "<<a;
    a += 9;
    cout<<"\nAfter a += 9 = "<<a;

    b -= a;// b = b - a;
    cout<<"\nAfter b -= a, b = "<<b;
    return 0;
}