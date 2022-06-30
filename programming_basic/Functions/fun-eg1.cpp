#include <iostream>
using namespace std;
string cities[3];

//data initialize
void initializeData() {
    for(int i = 0; i < 3; i++) {
        cout<<"Enter city: ";
        getline(cin,cities[i]);
    }
}


// output
void showData() {
    cout<<"--------- City List ---------\n";
    for(int j = 0; j < 3; j++) {
        cout<<cities[j]<<"\n";
    }
}

int main() {
    initializeData();
    showData();

    return 0;
}