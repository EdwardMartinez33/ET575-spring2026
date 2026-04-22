/*
Edward Martinez
Lab 17
April 20, 2026
*/

#include<iostream>

using namespace std;

// EXERCISE
    int total(int arr[], int size){
        int total = 0;

        for(int i = 0; i < size; i++){
            if(arr[i] % 2 == 0){
                total += arr[i];
            }
        }
        return total;
    }

int negative(int arr[], int size){
    int n = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] < 0){
            n++;
        }
    }

    return n;
}
