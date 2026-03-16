/*
Edward Martinez
Homework 4 - loops
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"---- Question 1 ---- "<<endl;
    int number;
    do{
    cout<<"Enter a number greater than or equal to 10: ";
    cin>>number;
    if(number<10){
        cout<<number<<" is invalid! ";
    }

    }while(number<10);
    cout<<number<<" is a valid number!"<<endl;
    

    cout<<"---- Question 2 ---- "<<endl;
    int num1, num2;
    int min, max;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
        if(num1<num2){
            min = num1;
            max = num2;     
        }
        else{
            min = num2;
            max = num1;
        }
    int numbers = min;
    cout<<"RESULT = ";
    while(numbers <= max){
        cout<<numbers<<"\t";
        numbers++;
    }

    cout<<"---- Question 3 ----"<<endl;
    const int dimensions = 11;
    for(int row = 1; row<= dimensions; row++){
        for(int col = 1; col<= dimensions; col++){
             if((col == 4 && row >= 3 && row <= 10) ||
               (col == 5 && row >=3 && row<= 10) ||  
               (row == 3 && col >= 4 && col <= 4) ||      
               (row == 4 && col >= 4 && col <= 8) ||      
               (row == 5 && col >= 4 && col <= 8) ||      
               (row == 6 && col >= 4 && col <= 5))     
            cout<<"#";
            else
            cout<<".";
        }
        cout<<endl;
    }
    return 0;
}