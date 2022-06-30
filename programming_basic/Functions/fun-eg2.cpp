#include <iostream>
using namespace std;

void checkLogin() {
    string email, pass;
    input:
    cout<<"Enter email: ";
    cin>>email;
    cout<<"Enter password: ";
    cin>>pass;

    if(email == "aung@gmail.com" && pass == "admin") {
        cout<<"Login success!";
    }
    else {
        int num;
        cout<<"\nEmail and password do not match.\n";
        cout<<"\nIf you want to continue ?, Press 1: ";
        cin>>num;
        if(num == 1)
        goto input;
    }

}

int main() {
    checkLogin();


    return 0;
}