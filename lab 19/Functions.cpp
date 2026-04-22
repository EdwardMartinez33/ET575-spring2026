/*
Edward Martinez
Lab 18
April 22, 2026
*/

#include<iostream>

using namespace std;

// Example 1
const int NUMCOLS = 5;
void print2d(int arr[][NUMCOLS], int rowsize){
for(int row = 0; row<rowsize; row++){
for(int col = 0; col<NUMCOLS; col++){
cout<<arr[row][col]<<" \t ";
}
cout<<endl;
}
}

// Example 2
int even2d(int a[][NUMCOLS], int rowsize){
int sumeven = 0;
for(int row = 0; row<rowsize; row++){
for(int col = 0; col<NUMCOLS; col++){
if(a[row][col] > 0 && a[row][col]%2 == 0){
sumeven++;
}
}
}
return sumeven;
}

// EXERCISE
void populate(int arr[][NUMCOLS], int rowsize){
    for(int row = 0; row<rowsize; row++){
        for(int col = 0; col<NUMCOLS; col++){
            arr[row][col] rand % 101;
        }
    }
}
void printvaluearray(int arr[][NUMCOLS], int rowsize){
    for(int row = 0; row<rowsize; row++){
        for(int col = 0; col<NUMCOLS; col++){
            cout<<arr[row][col]<<"\t";
        }
        cout<<endl;
    }
}
float average()