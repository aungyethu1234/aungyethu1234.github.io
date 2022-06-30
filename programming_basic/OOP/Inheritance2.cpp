#include <iostream>
using namespace std;
class Base {
    private:
        int x = 9;
    protected:
        int y = 20;
    public:
        int z = 22;
};

class PublicDerived : public Base {
    // protected:
    //     int y = 20;
    // public:
    //     int z = 22;
    void display() {
        cout<<"\n---- Public Access Mode";

    }
};

int main() {


    return 0;
}