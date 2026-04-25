/*
Edward Martinez
Lab 18
April 20, 2026
*/

#include<iostream>
#include "Functions.cpp"

using namespace std;

int main(){
    cout<<"---- Example 1: search functions"<<endl;
    // declare the array size
    const int ARRAYSIZE = 5;
    // declare the array
    int a[ARRAYSIZE];
    // declare the variable to save the array size
    int listsize;
    // declare the variable to save target
    int searchnumber;

    // call function fillarray
    fillarray(a,listsize,ARRAYSIZE);
    // testing listsize
    cout<<listsize<<endl;

    // call function 2
    printelement(a,listsize);

    // call function 3
    int foundindex = search(a,listsize,searchnumber);
    cout<<"Test search index "<<foundindex<<endl;

    // EXERCISE
    cout<<"---- EXERCISE ----"<<endl;
    int n[ARRAYSIZE];

    int count = collectnumber(n, ARRAYSIZE);
    float avg = averagenumber(n,count);
    int closest = closestmean(n,count,avg);

    printresult(avg, closest);

    return 0;
}