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
int sumevenpositive(int arr[][COLSIZE], int rowsize){
int sumallevenpositive = 0;
for(int row = 0; row<rowsize; row++){
for(int col = 0; col<COLSIZE; col++){
if(arr[row][col] > 0 && arr[row][col]%2 == 0){
sumallevenpositive += arr[row][col];
        }
cout<<endl;
    }
}
return sumallevenpositive;
}

void printsum(int sumallevenpositive){
    cout<<"The result is "<<sumallevenpositive<<endl;
}

// EXERCISE
void populate(int arr[3][4]){
    for(int row = 0; row< 3; row++){
        for(int col = 0; col<4; col++){
            arr[row][col] = rand() % 101;
        }
    }
}
void printvaluearray(int arr[3][4]){
    for(int row = 0; row< 3; row++){
        for(int col = 0; col<4; col++){
            cout<<arr[row][col]<<"\t";
        }
        cout<<endl;
    }
}
float average(int arr[3][4]){
    int sum = 0;
    for(int row = 0; row< 3; row++){
        for(int col = 0; col<4; col++){
            sum += arr[row][col];
        }
    }
    return (float)sum/(3*4);
}