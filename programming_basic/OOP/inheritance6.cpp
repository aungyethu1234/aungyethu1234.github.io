#include <iostream>
using namespace std;
class Base {
    private:
        int x, y;
    public:
        Base() {
            cout<<"Base's default constructor";
        }
        Base(int a, int b) {
            x = a;
            y = b;
            cout<<"\nBase's argument constructor";
        }

};
class Derived: public Base {
    private:
        int z;
    public:
        Derived() {
            cout<<"\nDerived's default constructor";
        }
        Derived(int a, int b, int c) {
            cout<<"\nDerived's argument constructor";
        }

};
int main() {
    Derived obj1 = Derived(); // default constructor
    cout<<"\n--------------\n";
    Derived obj2 = Derived(100, 200, 300); // argument constructor



}