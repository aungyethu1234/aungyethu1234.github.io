#include <iostream>
using namespace std;
int salaries[5] = {500000, 900000, 350000, 1000000, 1500000};
// max salary
int findMaxSalary() {
    int max = salaries[0];
    for(int i = 1; i < 5; i++) { // i = 4
        if(max < salaries[i]) { // 1000000 < 1500000
            max = salaries[i]; // max = 1500000
        }
    }
    return max;
}


// total salary
int findTotal() {
    int total = 0;
    for(int j = 0; j < 5; j++) { // j = 1
        total += salaries[j]; // total = 500000 + 900000 = 
    }
    return total;
}
int main() {
    int max_result = findMaxSalary();
    cout<<"Maximum salary is : "<<max_result<<"\n";
    int total_result = findTotal();
    cout<<"Total is : "<<total_result<<"\n";

    return 0;
}