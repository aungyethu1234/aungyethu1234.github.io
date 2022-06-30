#include <iostream>
using namespace std;
class Person {
    protected:
        string name;
        string nrcno;
    public :
        void initData(string name, string nrcno) {
            this->name = name;
            this->nrcno = nrcno;

        }
        void showData() {
            cout<<"\nName -"<<name;
            cout<<"\nNrcno - "<<nrcno;
        }
        void attend() {
            cout<<"\nHello, I am attending 5th year";
        }
};

class Student : public Person {
    // protected:
    //     string name;
    //     string nrcno;
    // public:
    //     void initData(string name, string nrc) {
    //         this->name = name;
    //         this->nrcno = nrc;
    //     }
    //     void showData() {
    //         cout<<"\nName - "<<name;
    //         cout<<"\nNrcno - "<<nrcno;
    //     }
    private:
        int rno;
    public:
        Student(int rno, string name, string nrcno) {
            this->rno = rno;
            initData(name, nrcno);
        }
        void showData() { // method overriding same name and same parameter
            Person::showData();
            cout<<"\nRno -"<<rno;
        }
};
class Programmer: public Person {
    private:
        string skillset;
    public:
        void setSkillset(string skills) {
            this->skillset = skills;
        }
        void viewSkilset() {
            cout<<"Hello, I am a programmer. I am skillful in these language -\n";
            cout<<skillset;
        }
};

int main() {
    Student obj1 = Student(1, "Aung Aung", "12/sakhana(n)123456");
    cout<<"\n----- Student Info -----\n";
    obj1.attend();
    obj1.showData();

    cout<<"\n------ Prgrammer Info -----------\n";
    Programmer obj2 = Programmer();
    obj2.initData("Cherry","5/mayana(n)123456");
    obj2.setSkillset("Js, Python, c++");
    obj2.viewSkilset();
    obj2.showData();


    return 0;
}