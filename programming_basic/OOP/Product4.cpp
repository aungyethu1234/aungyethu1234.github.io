#include <iostream>
using namespace std;

class Product {
    private:
        int barCode;
        string name;
    public:
        Product() {

        }
    // getter / setter
    bool SetBarCode(int code) {
        if(code >= 1000 && code <= 9999) {
        barCode = code;
        return true;
    }
    else {
        return false;
    }
    }

    int getBarCode() {
        return barCode;
    }
    void setName(string name) {
        this->name = name;
    }
    string getName() {
        return this->name;
    }
    void showData() {
        cout<<"\n------- Information -------\n";
        cout<<"Barcode: "<<barCode;
        cout<<"Name: "<<getName;
    }
        

};


int main() {
    int pCode;
    string pName;
    Product p = Product();
    cout<<"Enter barcode:";
    cin>>pCode;

   bool result = p.SetBarCode(pCode);
   while(!result) {
       cout<<"Enter valid barcode(1000~9999):";
       cin>>pCode;

       result = p.SetBarCode(pCode);
   }
   cout<<"\nEnter name: ";
   cin>>pName;
   p.setName(pName);
   p.showData();
    
    

    return 0;
}