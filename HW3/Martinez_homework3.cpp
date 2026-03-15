/*
Edward Martinez
Homework 3 - for loop
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"---- Program 1 ----"<<endl;
    int i = 1;
    int numbers;
    int positive = 0;
    int negative = 0;
    int zero = 0;
    for(i; i<=10; i++){
         cout<<"Enter 10 numbers \n"<<i<<": ";
        cin>>numbers;
        if(numbers>0){
            positive++;
        } 
        else if(numbers<0){
            negative++;
        }
        else{
            zero++;
        }       
    }
    cout<<"Total positive numbers = "<<positive<<endl;
    cout<<"Total negative numbers = "<<negative<<endl;
    cout<<"Total zeros = "<<zero<<endl;

    cout<<"---- Program 2 ----"<<endl;
    int x = 1;
    int days;
    float sales_figures;
    float total_sales = 0;
    float average;
    cout<<"Enter number of days: ";
    cin>>days;
    for(x; x<= days; x++){
        cout<<"Enter sales figure for day "<<x<<": ";
        cin>>sales_figures;
        total_sales += sales_figures;
    }
    average = total_sales / days;
    cout<<"Total sales $ "<<total_sales<<" for "<<days<<" days. "<<endl;
    cout<<"Average daily sales $ "<<average<<endl;

    
    return 0;
}