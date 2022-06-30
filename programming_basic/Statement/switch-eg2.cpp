#include <iostream>
using namespace std;

int main() {
    char grade;
    cout<<"Enter your grade: ";
    cin>>grade;
    switch(grade) {
    case 'A': 
        cout<<"Excellent\n"; 
        break;
    case 'B': 
        cout<<"Credit\n"; break;
    case 'C': 
        cout<<"Welll done\n"; break;
    case 'D': 
        cout<<"You pass\n"; break;
    case 'E': 
        cout<<"Better try again\n"; break;
    default: 
        cout<<"Invalid Grade"; 
    }


    return 0;
}