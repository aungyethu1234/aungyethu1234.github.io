#include <iostream>
using namespace std;

class Fruit {
    // data
    public :
        string name;
        int price;

    // method/function
    void setData(string na, int price) {
        name = na;
        this->price = price;
    }
    void showData() {
        cout<<"\nName: "<<name;
        cout<<"\nPrice: "<<price;
    }
};

int main() {
    Fruit fruit1 = Fruit();
    Fruit fruit2 = Fruit();


    // fruit1
    fruit1.name = "Orange";
    fruit1.price = 700;
    fruit1.showData();

    // fruit2
    fruit2.setData("Banana", 1500);
    cout<<"\n------ Another Food ------\n";
    cout<<"Name: "<<fruit2.name;
    cout<<"\nPrice: "<<fruit2.price;

    return 0;
}