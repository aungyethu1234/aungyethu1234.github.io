#include <iostream>
using namespace std;
void initializeItemData();
void displayItemData();
void searchItemByCode(int);
    
 int barCode[4];
    string itemName[4];
    float price[4];
       


int main() {
    int code;
    initializeItemData();
    displayItemData();
    cout<<"\n--------Search with barcode--------\n";
    cout<<"Enter barCode: ";
    cin>>code;
    searchItemByCode(code);
        
         
    return 0;
}

void initializeItemData() {
    for (int i = 0; i < 4; i++) {

        cout<<"Enter barCode: ";
        cin>>barCode[i];
        cout<<"Enter itemName: ";
        cin>>itemName[i];
        cout<<"Enter price: ";
        cin>>price[i];
        cout<<"-------------------\n";
    }
     

}
void displayItemData() {
    cout<<"------------------------ All Item ----------------------------\n";
    cout<<"Code \t \t Item \t \t \t Price\n";
        for (int j = 0; j < 4; j++) {
        cout<<barCode[j]<<"\t \t "<<itemName[j]<<"\t \t \t "<<price[j]<<"\n";

    }
    
}

void searchItemByCode(int search) {
    
    int count = 0;
    
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

}