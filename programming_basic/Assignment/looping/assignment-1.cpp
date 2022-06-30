#include <iostream>
using namespace std;

int main() {
    int num, inp_num, zCount = 0, n = 0, p = 0, c = 1;
    cout<<"How many number you want to type: ";
    cin>>num;
    for(int i = 0; i < num; i++) {
        cout<<c++<<". "<<"Enter any number: ";
        cin>>inp_num;
        //Start zero count statement
        if(inp_num == 0) {
            zCount++;
        }
        //End zero count

        //Check positive or negative number
        if(inp_num < 0) {
            n++;
        }
        else if(inp_num == 0) {
            p;
            n;
        }
        else {
            p++;
        }
        //End positive or negative num statement

    }
    cout<<"\n_______________________________";
    cout<<"\nNumbers of Zero: "<<zCount;
    cout<<"\nNumbers of positive number: "<<p;
    cout<<"\nNumbers of negative number: "<<n;



    return 0;
}