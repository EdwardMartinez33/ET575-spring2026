/*
Edward Martinez
Lab 17
April 20, 2026
*/

#include<iostream>
#include "Functions.cpp"

using namespace std;

int main(){
    cout<<"---- Function 1 ----"<<endl;
    const int s = 5;
    int arr[s] = {1, 4, 6, -4, -8};
    
    int totaleven = total(arr,s);
    cout<<totaleven<<endl;

    int totalnegative = negative(arr,s);
    cout<<totalnegative<<endl;

    return 0;
}