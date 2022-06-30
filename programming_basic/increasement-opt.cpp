#include <iostream>
using namespace std;
int main() {
    int var1 = 5;
    int var2 = 5;
    cout<<"var1 = "<<var1;
    cout<<"\nvar2 = "<<var2;
    int result = var1++ -2;
    //var1++; // var1 = var1 + 1;
    //++var1;
    // 1 => var1 - 2 (5 - 3)
    //2 => result = 3;
    //3 => var1++ (var1 = 6)
    cout<<"\nAfter increasement, var1 = "<<var1;
    cout<<"\nResult: "<<result;
    return 0;

}