/*
Edward Martinez
Lab 16
April 20, 2026
*/

#include<iostream>
#include "Functions.cpp"

using namespace std;

int main(){
    cout<<"---- Example 1: pointer and reference"<<endl;
    pointerreference();

    cout<<"---- Example 2: passing pointer and reference to a function"<<endl;
    string something = "Hello World!";
    printvalue(something);
    printaddress(&something);
    printreference(something);

    cout<<"---- Example 3: intro to array ----"<<endl;
    introarray();

    cout<<"---- Example 4: length of an array ----"<<endl;
    lenghtarray();

    cout<<"---- Example 5: loop through an array ----"<<endl;
    looparray();

    cout<<"---- Example 6: pass an array to a function ----"<<endl;
    // declare an array
    const int s = 3;
    int numbers[s];
    
    // fill up the array with data
    fillup(s, numbers);

    // print the values in an array
    printarray(s, numbers);

    // print the max value
    int m = maxnumber(s, numbers);
    cout<<"The maximum number is "<<m<<endl;

    // EXERCISE
    cout<<"---- EXERCISE ----"<<endl;
return 0;
}