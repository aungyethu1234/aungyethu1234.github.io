#include <iostream>
using namespace std;
string brands[5];
int index = 0;

// initialize 
void addBrand(string name) {
    brands[index] = name;
    index++;
}

// display
void showData() {
    cout<<"\n____ All Brand _____";
    for(int i = 0; i < 5; i++) {
        cout<<brands[i]<<"\n";
    }
}

int main() {
    addBrand("Samsung");
    addBrand("iphone");
    addBrand("Vivo");
    addBrand("Mi");
    addBrand("Oppo");
    showData();


    return 0;
}