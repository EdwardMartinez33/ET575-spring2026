/*
Lab 7

Edward Martinez

Feb 9, 2026

*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n---- Example 1: nested conditional ----"<<endl;
    // use nested conditional statement to check if a number is positive (even or odd), negative, or zero
    int number = 9;
    if(number>0){
        if(number%2==0)
        cout<<number<<" is positive and even"<<endl;
       else 
       cout<<number<<" is positive and odd"<<endl; 
    }
    else if (number<0){
        if(number%2==0)
        cout<<number<<" is negative and even"<<endl;
        else
        cout<<number<<" is negative and odd"<<endl;
    }
    else{
        cout<<"The number is zero"<<endl;
    }

    cout<<"\n---- Example 2: nested conditional ----"<<endl;
    //print the sort three numbers from the highest to the lowest number
    // declare variables
    int num1, num2, num3;
    // collect values
    cout<<"Enter three numbers: "<<endl;
    cin>>num1>>num2>>num3;
    // conditional statement
    if(num1>num2 && num1>num3){
        cout<<num1<<" num1 is the highest number"<<endl;
        if(num2>num3)
        cout<<num1<<"\t"<<num2<<"\t"<<num3<<endl;
        else
        cout<<num1<<"\t"<<num3<<"\t"<<num2<<endl;
    }
    else if(num2>num1 && num2>num3){
        cout<<num2<<" num2 is the highest number"<<endl;
        if(num1>num3)
        cout<<num2<<"\t"<<num1<<"\t"<<num3<<endl;
        else
        cout<<num2<<"\t"<<num3<<"\t"<<num1<<endl;
    }
    else{
        cout<<num3<<" num3 is the highest number"<<endl;
        if(num1>num2)
        cout<<num3<<"\t"<<num1<<"\t"<<num2<<endl;
        else
        cout<<num3<<"\t"<<num2<<"\t"<<num1<<endl;
    }

    cout<<"\n---- Example 3: if-else operands ----"<<endl;
    // use operands to check if a number is even or odd
    /*
    if(x%2==0)
    cout<<"Even"<<endl;
    else
    cout<<"Odd"<<endl;
    */
   int x = 5;
   cout<<"The number is "<<(x%2==0 ? "Even" : "Odd" )<<endl;

   cout<<"\n---- EXERCISE ----"<<endl;
   int car_budget;
   cout<<"Enter your car budget: "<<endl;
   cin>>car_budget;
   if(car_budget<10000){
    cout<<"Keep saving!"<<endl;  
   }
   else if(car_budget >=10000 && car_budget <=30000){
    cout<<"With "<<car_budget<<" you can afford an Economy car: ";
    if(car_budget >=10000 && car_budget <=20000)
    cout<<"Compact Car"<<endl;
    else if(car_budget >=20000 && car_budget <=30000)
    cout<<"Mid-size Car"<<endl;
   }
   else if(car_budget >=30000 && car_budget <=70000){
    cout<<"With "<<car_budget<<" you can afford a Standard car: ";
    if(car_budget >=30000 && car_budget <=50000)
    cout<<"Sedan"<<endl;
    else if(car_budget >=50000 && car_budget <=70000)
    cout<<"Luxury Sedan"<<endl;
   }
   else if(car_budget >=70000 && car_budget <=150000){
    cout<<"With "<< car_budget<<" you can afford a Performance-oriented Car: ";
    if(car_budget >=70000 && car_budget <=100000)
    cout<<"Sports Car"<<endl;
    else if(car_budget >=100000 && car_budget <=150000)
    cout<<"Super Car"<<endl;
   }
   else if(car_budget >150000){
    cout<<"With "<<car_budget<<" you can afford a High-end luxury car: ";
    if(car_budget >150000)
    cout<<"Maserati or Rolls-Royce?"<<endl;
   }
   else{
    cout<<"Invalid budget!"<<endl;
   }
    return 0;
}