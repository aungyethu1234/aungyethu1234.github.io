#include <iostream>
using namespace std;
class Product {
    private:
        string name;
        int barCode;
        int price;

    public:
        Product() {

        }
        Product(int code, string name, int price) {
            setBarCode(code);
            setName(name);
            setPrice(price);
        }
        void setBarCode(int barCode) {
            if(barCode >= 1000 && barCode <= 9999) {
                this->barCode = barCode;
            }
            else {
                this->barCode = 0;
                cout<<"\nIncorrect bar code number";
            }
            
        }

        int getBarCode() {
            return this->barCode;
        }
        void setName(string name) {
            this->name = name;

        }
        string getName() {
            if(name == "") {
                return "Name is empty";
            }
            else {
                return this->name;
            }
            

        }
        void setPrice(int price) {
            if(price < 100) {
                this->price = 0;
                cout<<"Price must be at least 100ks\n";
            }
            else {
                this->price = price;
            }
        }
        int getPrice() {
            return this->price;
        }
        
        void showData() {
            cout<<"\n------ Product Data -----\n";
            cout<<"Barcode: "<<getBarCode()<<"\n";
            cout<<"Name: "<<getName()<<"\n";
            cout<<"Price: "<<getPrice()<<"\n";
        }



};

int main() {
    Product p1 = Product();
    string p_name;
    int p_code;
    int p_price;
    cout<<"Enter name: ";
    cin>>p_name;
    p1.setName(p_name);

    cout<<"\nEnter bar code: ";
    cin>>p_code;
    p1.setBarCode(p_code);

    cout<<"\nEnter price: ";
    cin>>p_price;
    p1.setPrice(p_price);

    p1.showData();

    



    return 0;
}