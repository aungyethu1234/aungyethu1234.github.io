#include <iostream>
using namespace std;
int main(){
    int empNo;
    string name;
    string email;
    int salary;


    cout<<"------- User Input----------\n";
    cout<<"Enter Employee No: ";
    cin>>empNo;
    cout<<"Enter Your Name: ";
    getline(cin,name);
    cout<<"Enter Your Email: ";
    cout<<"Your Email: "<<email;
    cin>>email;
    cout<<"Enter Your Salary: ";
    cin>>salary;
    cout<<"Your Salary: "<<salary;
    return 0;

}