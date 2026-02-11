/*
Edward Martinez
Feb 11, 2026
Lab 8, control flow using switch-case statement
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"\n---- Example 1: switch-case----"<<endl;
    // use switch-case statement to ask the user to select a dayoff
    // declare variables
    int day;
    string dayoff = " ";
    // prompt message
    cout<<"Select a dayoff: "<<endl;
    cout<<"1 for Monday"<<endl;
    cout<<"2 for Tuesday"<<endl;
    cout<<"3 for Wednesday"<<endl;
    cout<<"4 for Thursday"<<endl;
    cout<<"5 for Friday"<<endl;
    // collect the dayoff
    cin>>day;
    
    // switch-case statement
    switch(day)
    {
        case 1:
        dayoff = "Monday";
        break;

        case 2:
        dayoff = "Tuesday";
        break;

        case 3:
        dayoff = "Wednesday";
        break;

        case 4:
        dayoff = "Thursday";
        break;

        case 5:
        dayoff = "Friday";
        break;

        default:
        dayoff = "Invalid";
        break;
    }

    // prompt result
    cout<<"Your dayoff is "<<dayoff<<endl;

     cout<<"\n---- Example 2: switch-case----"<<endl;
     // use switch-case statement to pick a gender
     // declare variables
     char gender;
     // prompt message
     cout<<"Select a gender: "<<endl;
     cout<<"f for female"<<endl;
     cout<<"m for male"<<endl;
     cout<<"o for other"<<endl;
     // collect gender
     cin>>gender;

     // switch-case statement
     switch (gender)
     {
     case 'f': case 'F':
        cout<<"Gender = Female"<<endl;
        break;

        case 'm': case 'M':
        cout<<"Gender = Male"<<endl;
        break;
        
        case 'o': case 'O':
        cout<<"Gender = Other"<<endl;
        break;
     
     default:
     cout<<"Gender = Undefined"<<endl;
        break;
     }

     cout<<"\n---- EXERCISE ----"<<endl;
     int number1;
     int number2;
     char oper = '+,-,*,/,%,q';
     int result;

     cout<<"Enter the first number: "<<endl;
     cout<<"Enter the second number: "<<endl;
     cout<<"Choose an operation (+,-,*,/,%, q to quit): "<<endl;

     cin>>number1;
     cin>>number2;
     cin>>oper;

     switch (oper)
     {
     case '+':
        result = number1 + number2;
        break;

        case '-':
        result = number2 - number1;

        case '*':
        result = number1 * number2;

        case '/':
       result = number1 / number2;

        case 'q':
        break;

        case '%':
        result = number1 % number2;
     
     default:
     cout<<"Invalid"<<endl;
        break;
     }
     cout<<"Result: "<<number1<< oper <<number2<<" = "<<result<<endl;

    return 0;
}