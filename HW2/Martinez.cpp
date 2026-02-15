/*
Homework 2: Branching

Edward Martinez
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"---- Program 1 ----"<<endl;

    // declare variable
    int age;
    cout<<"Enter your age: ";
    // collect variable
    cin>>age;

    // check invalid age
    if(age < 0 or age >= 120){
        cout<<"Invalid age. Please enter a valid age."<<endl;
    }
    // check age is less than 13
    else if(age < 13){
        cout<<"Not eligible for any activities."<<endl;
    }
    // check age is greater than or equal to 13 and less than or equal to 17
    else if(age >= 13 && age <= 17){
        cout<<"Eligible for youth activities."<<endl;
    }
    // check age is greater than or equal to 18 and less than or equal to 64
    else if(age >= 18 && age <= 64){
        cout<<"Eligible for adult activities."<<endl;
    }
    // check if age is greater than or equal to 65 
    else if(age >= 65){
        cout<<"Eligible for senior activities."<<endl;
    }
    
    cout<<"---- Program 2 ----"<<endl;
    // declare variables
    int num1;
    int num2;
    int result;
    // collect variables
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    // adds the two numbers 
    result = num1 + num2;
    
    // conditional statement
    if(result < 0){
        cout<<"False alarm! The sum is "<<result<<endl;
    }
    else if(result >=1 && result <= 100){
        if (result % 5 == 0)
        cout<<result<<" is a pentagon"<<endl;
        if (result % 2 != 0)
        cout<<result<<" is a odd guess"<<endl;
    }
    else if(result >=101 && result <= 200){
        cout<<"The lucky number is "<<result<<endl;
    }
    else if(result >=201 && result <= 999){
        cout<<result<<" is a dreaming number"<<endl;
    }
    else if(result >= 1000){
        if(result % 2 == 0)
        cout<<result<<" approaches infinite evenly!";
        if(result > 2000)
            cout<<result<<" approaches to infinite and beyond!";
        
    }

    cout<<"---- Program 3 ----"<<endl;
    
    // declare variables
    int option;
    float temperature;
    float results;
    
    // displays menu options
    cout<<"\n1. Celsius to Fahrenheit";
    cout<<"\n2. Fahrenheit to Celsius";
    cout<<"\n3. Kelvin to Celcius";
    cout<<"\n4. Kelvin to Fahrenheit";
    cout<<"\n5. Exit";
    // user selects a option
    cout<<"\nSelect an option: ";
    cin>>option;
    
    // switch-case statement
    switch(option){
        // Converts celsius to fahrenheit
        case 1:
        cout<<"Enter a celsius: ";
        cin>>temperature;
        results = temperature *(9/5)+32;
        cout<<temperature<<" celsius is equal to "<<results<<" fahrenheit"<<endl;
        break;

        // Converts fahrenheit to celsius
        case 2:
        cout<<"Enter a fahrenheit: ";
        cin>>temperature;
        results = temperature - 32 * (5/9);
        cout<<temperature<<" fahrenheit is equal to "<<results<<" celsius"<<endl;
        break;

        // Converts kelvin to celsius
        case 3:
        cout<<"Enter a kelvin: ";
        cin>>temperature;
        results = temperature - 273.15;
        cout<<temperature<<" kelvin is equal to "<<results<<" celsius"<<endl;
        break;

        // Converts kelvin to fahrenheit
        case 4:
        cout<<"Enter a kelvin: ";
        cin>>temperature;
        results = temperature - 273.15 * (9/5) + 32;
        cout<<temperature<<" kelvin is equal to "<<results<<" fahrenheit"<<endl;
        break;

        // Exits
        case 5:
        break;
    }
    
    return 0;

}