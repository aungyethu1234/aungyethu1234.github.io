#include <iostream>
using namespace std;

int main() {
    char ch;
    do {
        cout<<"If you entered 'q', program will terminate...\n";
    cout<<"Enter a single character: ";
    cin>>ch;
    if(ch >= '0' && ch <= '9') {
        cout<<ch<<" is digit\n";
    }
    else {
        cout<<ch<<" is not digit\n";
    }
    
    } while(ch != 'q');
    
    
    return 0;
}