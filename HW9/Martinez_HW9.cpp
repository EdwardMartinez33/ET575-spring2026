/*
Edward Martinez
Homework 9
April 27, 2026
*/

#include<iostream>
#include"Functions.cpp"
using namespace std;

int main(){

    srand(time(0));

    int sizearray = arraysize();   

    int noise[sizearray];     

    randPopulate(noise, sizearray);

    cout << "Original Set:" << endl;
    print(noise, sizearray); 
 
    reverse(noise, sizearray);   

    cout << endl << "Reversed Set:" << endl;
    print(noise, sizearray); 

    return 0; 
}