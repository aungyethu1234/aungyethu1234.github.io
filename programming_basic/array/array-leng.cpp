#include <iostream>
using namespace std;

int main() {
    int mark1[] = {100, 50, 60};
    int mark2[] = {};
    int mark3[] = {100, 40, 90, 80};

    cout<<"Size of int data type: "<<sizeof(int)<<" bytes\n";
    cout<<"Number of item in mark2 arrray: "<<sizeof(mark3)/sizeof(int);


    return 0;
}