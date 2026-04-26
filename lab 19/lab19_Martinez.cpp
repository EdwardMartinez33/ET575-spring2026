/*
Edward Martinez
Lab 18
April 22, 2026
*/

const int COLSIZE = 5;
#include<iostream>
#include "Functions.cpp"

using namespace std;

int main(){
    cout<<"---- Example 1: 2d array ----"<<endl;
    int rowsize = 3;
    int a[rowsize][COLSIZE] = {
        {4,8,-12},
        {1,-8,3,5,7},
        {-6,2,9}

    };
    // call the print function
    print2d(a,rowsize);

    cout<<"---- Example 2: sum of all positive even numbers ----"<<endl;
    cout<<sumevenpositive(a,rowsize)<<endl;
    // EXERCISE
    cout<<"---- EXERCISE ----"<<endl;
    srand(time(0));
    
    char choice;

    do{
        int numbers[3][4];

        populate(numbers);
        printvaluearray(numbers);
        float avg = average(numbers);
        cout<<"Average = "<<avg<<endl;

        cout<<"Another run? (y/n): ";
        cin>>choice;
    }while(choice == 'y');

    return 0;
}