/*
Edward Martinez
Lab 13 - Introduction to functions
March 16, 2006
*/

#include<iostream>
#include "Function_Martinez.cpp"

using namespace std;

int main(){
    cout<<"---- Example 1: Void functions ----"<<endl;
    printHello();
    printHello();
    
    cout<<"---- Example 2: Has value ----"<<endl;
    string n = " Anna";
    greeting(" Peter");
    greeting(n);

    cout<<"---- Example 3: ----"<<endl;
    int a = triplenumber(3);
    cout<<a<<endl;
    cout<<triplenumber(3)<<endl;

    cout<<"---- Example 4: ----"<<endl;
    cout<<checknumber(-10)<<endl;
    cout<<checknumber(10)<<endl;
    cout<<checknumber(0)<<endl;

    cout<<"---- Example 5: ----"<<endl;
    // int num = positivenum();
    int lengt = positivenum();
    int widt = positivenum();

    int area_rectangle = arearectangle(lengt, widt);
    printarea(area_rectangle);
    return 0;
}