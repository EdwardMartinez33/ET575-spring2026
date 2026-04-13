/*
Edward Martinez
Lab 16
April 13, 2026
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
    printvalue(something);
    printvalue(something&);

    cout<<"---- Example 3: ----"<<endl;
    innerarray();
return 0;
}