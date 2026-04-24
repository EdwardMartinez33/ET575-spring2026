/*
Edward Martinez
Homework 7
April 24, 2026
*/

#include<iostream>
#include "Functions.cpp"

int main(){
    srand(time(0));

    int num = collect_size();

    int a[num];

    populate_numbers(a,num);
    print_numbers(a,num);
    cout << "Minimum number: \t" << array_min(a, num) << endl; 
    cout << "Average of numbers: \t" << array_avg(a, num) << endl; 
}