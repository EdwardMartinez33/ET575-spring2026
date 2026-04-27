/*
Edward Martinez
Homework 8
April 26, 2026
*/

#include<iostream>
using namespace std;

void search(int arr[4][4], int value, int result[2]){
    for(int row = 0; row < 4; row++){
        for(int col = 0; col < 4; col++){
            if(arr[row][col] == value){
                result[0] = row;
                result[1] = col;
                return;
            }
        }
    }
    result[0] = -1;
    result[1] = -1;
}
void Result(int value, int result[2]){
    if(result[0] != -1 && result[1] != -1){
        cout<<"Number "<<value<<" was found in row "<<result[0]<<" and column "<<result[1]<<endl;
    }
    else{
        cout<<"Number "<<value<<" was not found"<<endl;
    }
}