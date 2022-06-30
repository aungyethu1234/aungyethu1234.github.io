#include <iostream>
using namespace std;

int main() {
    string uName, uPassword;
    user_input:
    cout<<"Enter user name: ";
    cin>>uName;
    cout<<"Enter user password: ";
    cin>>uPassword;
    if(uName != "mmit" || uPassword != "123") {
        goto user_input;
    }
    cout<<"\nLogin Success.........";


    return 0;
}