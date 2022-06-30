#include <iostream>
using namespace std;

int main() {
    string brands[] = {"Sansung", "iphone", "Vivo", "Oppo"};
    string search_name;
    int index = -1;

    cout<<"Enter brand name to search: ";
    cin>>search_name;

    for(int i = 0; i < 4; i++) {
        if(brands[i] == search_name) {
            index = i;
            break;
        }
        
    }

    if(index != -1) {
        cout<<search_name<<" is found";
    }
    else {
        cout<<search_name<<" does not found";
    }
    return 0;
}