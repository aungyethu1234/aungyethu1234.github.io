#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    cout<<"Enter Number1: ";
    cin>>num1;
    cout<<"Enter Number2: ";
    cin>>num2;
    cout<<"Enter Number3: ";
    cin>>num3;
    //find max value;
    int max_num = num1; //max_num = 100;

    if(max_num < num2){ // 100 < 900
        max_num = num2; // max_num = 900
    }
    if(max_num < num3){ // 900 <500
        max_num = num3;

    }
    //display output
    cout<<"Max number is: "<<max_num;


    return 0;
}