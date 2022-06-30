#include <iostream>
using namespace std;

int main() {
    int sNum, eNum, count1 = 0, count2 = 0, count3 = 0, //count = 0 + 1 + 1 = 2 /3 // c2 = 2 -1 = 1
    c2 = 0, c3 = 0, c4 = 0;
    cout<<"Enter start number: ";
    cin>>sNum; //1
    cout<<"Enter end number: ";
    cin>>eNum; //10
    cout<<"..............................\n";
    cout<<"Number divided by 5 and 8: \n";
    for(sNum; sNum < eNum; sNum++) { //5 < 8
        if(sNum%5 == 0 && sNum%8 == 0) {
            cout<<sNum<<"\n";
        }
        count1++;
        if(count1 == 2){
            c2 = sNum - 1;
    }
    }
    // cout<<"c2 value is: "<<c2<<"\n";
    // cout<<"eNum value is: "<<eNum<<"\n";
    cout<<"........\n";
    cout<<"Number divided by only 5: \n";
    for(c2; c2 < eNum; c2++) {
        if(c2%5 == 0 && c2%8 != 0) {
            cout<<c2<<"\n";
        }
        
        count2++;
        if(count2 == 2) {
            c3 = c2 - 1;
        }
    }
    cout<<"........\n";
    cout<<"Number divided by only 8:\n";
    for(c3; c3 < eNum; c3++) {
        if(c3%5 != 0 && c3%8 == 0) {
            cout<<c3<<"\n";
        }
        
        count3++;
        if(count3 == 2) {
            c4 = c3 -1;
        }
    }
    cout<<"........\n";
    cout<<"Number is not divided by 5 and 8:\n";
    for(c4; c4 < eNum; c4++) {
        if(c4%5 != 0 && c4%8 != 0) {
            cout<<c4<<"\n";
        }
        
    }
    cout<<"........\n";
    
    
    

    return 0;
}