/*
Edward Martinez
Homework 6
March 22, 2026
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"---- Exercise 1 ----"<<endl;
    int* ptr;
    int var = 7;
    int foo = 21;
    ptr = &var;
    ptr = &foo;
    int& ref = var;
    cout<<"Pointer 1 = "<<ptr<<endl;
    cout<<"value 1 = "<<*ptr<<endl;
    cout<<"Pointer 2 = "<<ptr<<endl;
    cout<<"value 2 = "<<*ptr<<endl;
    cout<<"ref = "<<&ref<<endl;    
}