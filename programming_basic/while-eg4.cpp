#include <iostream>
using namespace std;
int main() {
    int start, end;
    cout<<"Enter start number: ";
    cin>>start;
    cout<<"Enter end number: ";
    cin>>end;
    while (start <= end) {
        if(start%2 != 0){
            cout<<start<<" is "<<"odd number\n";
        }
        start++;
    }
}
