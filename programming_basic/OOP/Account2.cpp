#include <iostream>
using namespace std;

class Account {
    private:
        string account_holder;
        string account_no;
        int balance;
    public : // constructor
    // holder = "JK", no = "87654321", amt = 600000
        Account(string holder, string no, int balance) {
            account_holder = holder;
            this->account_no = no;
            this->balance = balance;
        }
        Account() {

        }
        // holder = "Jeon", no = 12345678, amt = 500000
        void initializeData(string holder, string no, int amt) {
            this->account_holder = holder;
            this->account_no = no;
            this->balance = amt;
        }
        void showData() {
            cout<<"\n------- Account Info ------\n\n";
            cout<<"Name: "<<this->account_holder;
            cout<<"\nNumber: "<<this->account_no;
            cout<<"\nCurrent Balance: "<<this->balance<<"ks.";
        }
};

int main() {
    Account acc1 = Account();
    Account acc2 = Account();

    acc1.initializeData("Jeon", "12345678", 500000);
    acc1.showData();


    cout<<"\n---== Another Account ---\n\n";
    Account acc2 = Account("JK", "87654321", 500000);
    acc2.showData();

    return 0;
}

// class Student {
//     private:
//         int rno;
//         string name;
//     public:
//         Student(int rno) {
//             this->rno = rno;
//         }
//     public: void showData() {
//         cout<<"Rno: "<<rno;
//     }
// }