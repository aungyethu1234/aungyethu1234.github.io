#include <iostream>
using namespace std;
int main() {
    int barCode[4];
    string itemName[4];
    float price[4];

        for (int i = 0; i < 4; i++) {

        cout<<"Enter barCode: ";
        cin>>barCode[i];
        cout<<"Enter itemName: ";
        cin>>itemName[i];
        cout<<"Enter price: ";
        cin>>price[i];
        cout<<"-------------------\n";
    }
    cout<<"\n";
    cout<<"------------------------ All Item ----------------------------\n";
    cout<<"Code \t \t Item \t \t \t Price\n";
        for (int j = 0; j < 4; j++) {
        cout<<barCode[j]<<"\t \t "<<itemName[j]<<"\t \t \t "<<price[j]<<"\n";

    }
    cout<<"\n";
    cout<<"Item--------(price > 300)---------\n";
    cout<<"Item \t \tPrice\n";
        for (int p = 0; p < 4; p++) {
            if (price[p] > 300) {
                cout<<itemName[p]<<"\t \t"<<price[p]<<"\n";
            }
        }
    cout<<"----------------------------------------------\n";
    int search, count = 0;
    char key;
    search: cout<<"Your want to search item with barCode y or n: ";
    cin>>key;
    if (key == 'y' || key == 'Y') {
         do {
            cout<<"Enter barCode: ";
            cin>>search;
        for (int c = 0; c < 4; c++) {
            if (search == barCode[c]) {
                cout<<"Code: "<<barCode[c]<<"\n";
                cout<<"Name: "<<itemName[c]<<"\n";
                cout<<"Price: "<<price[c]<<"\n";
                count++;
                break;
            }
        }
        if (count == 0) {
            cout<<search<<" does not exist try again\n";
        }
         } while (count != 1);

        
    }
    
    cout<<"--------------------------------------------\n";

    return 0;
}