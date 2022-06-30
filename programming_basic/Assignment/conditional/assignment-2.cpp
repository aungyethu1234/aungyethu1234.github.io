#include <iostream>
using namespace std;

int main() {
    string username = "Mg Mg";
    string password = "admin";
    string user, pass;
    cout<<"Login\n";
    cout<<"====="<<endl;
    cout<<"Enter User_Name: ";
    getline(cin,user);
    cout<<"Enter Password: ";
    cin>>pass;

    if(user == username && pass == password){
        cout<<"Login Success";
    }
    else if(user == username && pass != password) {
        cout<<"Password is incorrect";
    }
    else if(user != username && pass == password) {
        cout<<"User_Name is incorrect";
    }
    else {
        cout<<"User_Name and Password do not match";
    }

    return 0;
}