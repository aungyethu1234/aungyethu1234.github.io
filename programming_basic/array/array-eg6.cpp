#include <iostream>
using namespace std;
int main() {
    int len = 3;
    int numbers[3] = {10, 11, 19};
    cout<<"|n_____ All elements ___\n";
    for(int i = 0; i < len; i++) {
        cout<<numbers[i]<<"\t";
    }

    // assume
    int min_num = numbers[0]; // min_num = numbers[0] (13)
    for(int i = 1; i < len; i++) { // 2 < 3 true
        if (min_num > numbers[i]) {// 13 > number[2] (19)
            min_num = numbers[i]; //
        }
    }
    cout<<"\nMin number: "<<min_num;

    return 0;
}