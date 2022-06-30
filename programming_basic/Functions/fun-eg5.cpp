#include <iostream>
using namespace std;
bool checkLogin(string email, string pass) {
    
    return (email == "aung@gmail.com" && pass == "admin") ? true: false;
}

int main() {
    string u_email, pass;
    cout<<"Enter email: ";
    cin>>u_email;
    cout<<"Enter password: ";
    cin>>pass;
    bool status = checkLogin(u_email, pass);
    if(status) {
        cout<<"Login Success!";
    }
    else {
        cout<<"Login Fail";
    }

    


    return 0;
}