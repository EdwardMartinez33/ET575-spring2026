/*
Edward Martinez
Homework 4 - loops
*/

#include<iostream>
#include "Functions.cpp"

using namespace std;

int main(){
   cout<<"---- Program 1: Wind chill calculation ----"<<endl;
int s = speed(); 
float t = temp(); 
prompt_result(wind_speed(s,t));  

cout<<"---- Program 2: Descending order entries  ----"<<endl;
int num1 = collectnumber();

int num2 = collectnumber();

int num3 = collectnumber();

bool desc_order = order_result(num1,num2,num3);

runProgram(num1,num2,num3,desc_order); 

return 0; 

}


