#include <iostream>
using namespace std;
int main(){
    int totalSec;
    cout<<"Enter total second: ";
    cin>>totalSec;//totalSec = 3669

    //hr = 3669/3600 =1
    int hr = totalSec/3600; //convert hr
    // remain_sec = 3669%3600 =69
    int remain_sec = totalSec%3600; // get remaining sec
    // min = 69/60 =1
    int min = remain_sec/60;
    // remain_sec = 69%60 = 9;
    remain_sec = remain_sec%60;

    cout<<"Hour: " << hr;//1
    cout<<"\nMin: " << min;
    cout<<"\nSecond: "<< remain_sec;

    return 0;
}