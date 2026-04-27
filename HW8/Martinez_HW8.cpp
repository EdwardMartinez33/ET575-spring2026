/*
Edward Martinez
Homework 8
April 26, 2026
*/

#include<iostream>
#include "Functions.cpp"

const int ROWCOL_ARRAY = 4;

int main(){

    int ar[ROWCOL_ARRAY][ROWCOL_ARRAY] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int value;
    cout<<"Enter a number to search: ";
    cin>>value;

    int result[2];

    // call function to search for a value in a 2D array
    search(ar, value, result);
    // call function to display a message
    Result(value, result);

    return 0;
}