#include <iostream>
using namespace std;
int main() {
    int sum = 0, num, inpNum;
    cout<<"Enter any number: ";
    cin>>num;
    inpNum = num; 

    while (num != 0) { 
        sum = (sum + num % 10);
        num = (num / 10); 
    }
    cout<<"The sum of digit of "<<inpNum<<": "<<sum;



    return 0;
}