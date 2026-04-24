/*
Edward Martinez
Homework 7
April 24, 2026
*/

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int collect_size(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    return size;
}

void populate_numbers(int *ar, int s){
    for(int i = 0; i < s; i++){
        ar[i] = rand() % 99 + 1;
    }
}

void print_numbers(int *ar, int s){
    cout<<"Array numbers: ";
    for(int i = 0; i < s; i++){
        cout<<ar[i]<<"\t";
    }
    cout<<endl;
}

int array_min(int *ar, int s){
    int min = ar[0];
    for(int i = 1; i < s; i++){
        if(ar[i] < min){
            min = ar[i];
        }
    }
    return min;
}

float array_avg(int *ar, int s){
    int sum = 0;
    for(int i = 0; i < s; i++){
        sum += ar[i];
    }
    return(float)sum / s;
}