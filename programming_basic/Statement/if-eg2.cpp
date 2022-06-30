#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter non-zero number: ";

    cin>>num; // num = 8
    //if (num%2 == 1) {// 7%2 ==1 (1 == 1)}
    if(num%2 == 1){ //2%2 = 0
        cout<<num<<" is odd number!";
    }
    return 0;
}