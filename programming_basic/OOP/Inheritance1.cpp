#include <iostream>
using namespace std;

class Animal {
    protected:
        string name;
        int leg;
    public:
        void setName(string name) {
            this->name = name;
        }
        string getName() {
            return this->name;
        }
        void setLeg(int leg) {
            this->leg = leg;
        }
        int getLeg() {
            return this->leg;
        }
        void eat() {
            cout<<"\nI can eat!";
        }
        void sleep() {
            cout<<"\nI can sleep!\n";
        }

};

class Bird: public Animal {
    private:
        int wings;
    public:
        int getWings() {
            return this->wings;
        }
        void initData(string name, int leg, int wings) {
            this->wings = wings;
            this->name = name;
            this->leg = leg;
        }
        void fly() {
            cout<<"\nI can fly!";
        }
};
class Elephant: public Animal {
    private:
        int tail;
    public:
        void setTail(int tail) {
            this->tail = tail;
        }
        void swim() {
            cout<<"\nI can swim";
        }
        void showInfo() {
            cout<<"\n------ Elephant Info ------";
            cout<<"Name: "<<getName();
            cout<<"\nNo of legs: "<<getLeg();
            cout<<"\nNo of tail: "<<this->tail;
        }

};


int main() {
    Bird obj1 = Bird();
    obj1.initData("parrot",2, 2);
    cout<<"\n--- Bird Info ------";
    cout<<"Name: "<<obj1.getName();
    cout<<"\nNo. of legs: "<<obj1.getLeg();
    cout<<"\nNo of Wings: "<<obj1.getWings()<<"\n";
    obj1.eat();
    obj1.sleep();
    obj1.fly();

    Elephant obj2 = Elephant();
    obj2.setName("Thandar");
    obj2.setLeg(4);
    obj2.setTail(1);
    obj2.showInfo();
    obj2.eat();
    obj2.sleep();
    obj2.swim();




    return 0;
}