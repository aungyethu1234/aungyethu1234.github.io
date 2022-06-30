#include <iostream>
using namespace std;

int main () {

    int marks[3] = {100, 50, 90};
    //loop
    for(int i = 0; i < 3; i++) {
        cout<<marks[i]<<"\n";
    }
    string name[3] = {"Aung Aung", "Su Su", "Cherry"};
    //loop
    cout<<"\n_____ Name List _____\n";
    for(int i = 0; i < 3; i++) {
        cout<<name[i]<<"\n";
    }
    cout<<"\n_____ Name with marks___\n";
    for(int i = 0; i < 3; i++) {
        cout<<name[i]<<" got "<<marks[i]<<" marks.\n";
        
    }


    return 0;
}