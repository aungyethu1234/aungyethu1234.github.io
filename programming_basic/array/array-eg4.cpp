#include <iostream>
using namespace std;

int main() {
    int length = 3;
    int marks[3];
    // for loop
    for (int i = 0; i< length; i++) {
        cout<<"Enter mark "<<(i + 1)<<": ";
        cin>>marks[i];
    }


    //while
    cout<<"\n________ Mark List _______\n";
    int j = 0;
    while(j < length) {
        cout<<marks[j]<<"\n";
        j++;
    }



    //do while ( calculate total)
    j = 0;
    int total = 0;
    do 
    {
        total = total + marks[j];
        j++;
    } while (j < length);

    cout<<"Total marks: "<<total;



    return 0;
}