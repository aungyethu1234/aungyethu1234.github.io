#include <iostream>
using namespace std;

int main() {
int programming, english, maths, max = 0, min = 0, average = 0, total = 0;

cout<<"Enter mark for programming: ";
cin>>programming;   //30
cout<<"Enter mark for english: ";
cin>>english;   //30
cout<<"Enter mark for maths: "; 
cin>>maths; //30

// start maximum max conditional statement
if((programming == english) && (programming == maths)){
    cout<<"\nMaximum mark: All subjects are equal";
}

else if (programming > english){
    max = programming;
    if (max > maths){
        cout<<"\nSubject that got maximum mark is programming";
    }
    else {
        cout<<"\nSubject that got maximum mark is maths";
    }
}
else {
    max = english;
    if(max > maths){
        cout<<"\nSubject that got maximum mark is english";
    }
    else {
        cout<<"Subject that got maximum mark is maths\n";
    }
}

//End maximum mark conditional statement

//Start minimum mark conditional statement
if((programming == english) && (programming == maths)){
    cout<<"\nMinimum mark: All subjects are equal";
}

else if (programming < english){
    min = programming;
    if (min < maths){
        cout<<"\nSubject that got minimum mark is programming";
    }
    else {
        cout<<"\nSubject that got minimum mark is maths";
    }
}
else {
    min = english;
    if(min < maths){
        cout<<"\nSubject that got minimum mark is english";
    }
    else {
        cout<<"\nSubject that got minimum mark is maths";
    }
}
//end minimum mark conditional statement

//start total and average mark
total = (programming + english + maths);
average = (programming + english + maths)/3;
cout<<"\nTotal mark: "<<total;
cout<<"\nAverage mark: "<<average<<"\n";
//End total and average mark

//start distinction statement
cout<<"\nDistinciton subject -";
if(programming >= 80 || english >= 80 || maths >= 80){
    if(programming >=80){
        cout<<"\n \t \t Programming";
    }
    if(english >= 80) {
        cout<<"\n \t \t English";
    }
    if(maths >= 80) {
        cout<<"\n \t \t Maths";
    }
}
else {
    cout<<"\n \t \t No Distinction Subject";
}

//end distinction statement
//end program

return 0;
}