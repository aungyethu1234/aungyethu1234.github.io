#include <iostream>
using namespace std;

int main() {
    int num[5];
    int s = 1;
    for (int i = 0; i < 5; i++) {
        cout<<s++<<". Enter any number: ";
        cin>>num[i];
    }
    cout<<"\n";
    cout<<"Number divisible by 3:\n";
    cout<<"\n";
    int b = 0;
    for (int j = 0; j < 5; j++) {
        if (num[j]%3 == 0) {
            cout<<num[j]<<"\n";
        }
        else {
            b++;
        }
    }
    if (b == 5) {
        cout<<"Not found! \n";
    }
    cout<<"--------------------\n";


    return 0;
}