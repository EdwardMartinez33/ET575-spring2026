/*
Edward Martinez
Lab 13 - Introduction to functions
March 16, 2006
*/

#include<iostream>

using namespace std;

// Example 1 void functions are functions that don't return any value
void printHello(){
    cout<<"Hello!"<<endl;
    return; // optional
}

// Example 2
void greeting(string username){
    cout<<"Welcome to functions"<<username<<endl;
}

// Example 3
int triplenumber(int number){
    return number *3;
}

// Example 4
string checknumber(int number){
    if(number>0){
        return "positive";
    }
    else if(number<0){
        return "negative";
    }
    else{
        return "zero";
    }
}

// Example 5: Composition function
int positivenum(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;

    while(x<=0){
        cout<<"Invalid! Enter a positive number: ";
        cin>>x;
    }
    return x;
}

// Example 6
int arearectangle(int lengt, int widt){
    return lengt*widt;
}

void printarea(int area){
    cout<<"The area of the rectangle is "<<area<<endl;
}

// EXERCISE
bool even(int num){
    if(num % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}
void printResult(int num, bool result){
    cout<<"Is "<<num<<" even? "<<result<<endl;
}