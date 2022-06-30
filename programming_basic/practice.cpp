#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    char choice;
    cout<<"........Shutdown Your PC.........";
    do{cout<<"\npress S key to Shutdown your pc : ";
    cin>>choice;
    if(choice == 's' || choice == 'S') {
        system("c:\\windows\\system32\\shutdown /s /t 00");
    }
    else 
    {
        cout<<"......wrong key! Try again.......";
    }
    }
    while(choice != 's' || choice != 'S');
}

