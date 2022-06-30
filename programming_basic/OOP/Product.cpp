#include <iostream>
using namespace std;
class Product {
    // data
    public : int bar_code;
    private : 
    string name;
    float price;


    // functions
    public : void showData() {
        cout<<"Barcode: "<<bar_code;
        cout<<"\nName: "<<name;
        cout<<"\nPrice: "<<price;
    }
};

int main() {


    return 0;
}