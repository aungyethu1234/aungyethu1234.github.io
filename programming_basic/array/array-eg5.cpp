#include <iostream>
using namespace std;

int main() {
    int len = 3;
    int number[3] = {7, 9, 13};

    cout<<"From first element\n";
    for(int i = 0; i < len; i++) {
        cout<<number[i]<<"\t";
    }

    cout<<"\nFrom last element\n";
    for(int i = (len - 1); i >= 0; i--) {
        cout<<number[i]<<"\t";
    }



    return 0;
}