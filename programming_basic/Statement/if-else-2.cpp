#include <iostream>
using namespace std;

int main(){
    int mark;
    cout<<"Enter mark: ";
    cin>>mark;

    //verify fail or pass
    if(mark < 50) {
        cout<<"You Fail exam";
    }
    else {
        cout<<"You pass exam";
    }


    return 0;
}