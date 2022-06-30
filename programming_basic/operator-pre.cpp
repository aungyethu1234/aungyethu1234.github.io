#include <iostream>
using namespace std;

int main() {
    int a = 20, b = 10, c = 5, d = 30;
    int result;
    result = (a + b) * c / d;
    cout<<"(a + b) * c / d = "<<result;

    result = ((a + b) * c) /d; // (30 * 5) / 30 = 150/ 30 =5
    cout<<"\n((a + b)* c) / d = "<<result;

    result = (a + b) * (c / d);
    cout<<"\n(a + b) * (c / d) = "<<result;

    result = a + (b * c) / d;
    cout<<"\na + (b * c ) / d ="<<result;
    
    result = a + (b * c / d);
    return 0;
}