/*
Edward Martinez
Homework 9
April 27, 2026
*/

#include<iostream>
using namespace std;

int arraysize(){
    int size;

    do{
        cout<<"Enter an array size between 1 and 100: ";
        cin>>size;
        if(size < 1 || size > 100){
            cout<<"Invalid size enter again."<<endl;
        }

    }while(size < 1 || size > 100);

    return size;
}

void randPopulate(int arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] = rand() % 21 + 10;
    }
}

void print(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

void reverse(int arr[], int size){
    int temp;

    for(int i = 0; i < size / 2; i++){
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}