/*
Edward Martinez
Lab 6 control flow
Feb 4, 2026
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<"\n ---- Example 1: bool variables ----"<<endl;
    // bool variable returns a 1 for true or a 0 for false
    bool ispositive;
    int number;

    cout<<"Enter a number: ";
    cin>>number;

    ispositive = number > 0;

    cout<<"Is "<<number<<" positive? "<<ispositive<<endl;

    cout<<"\n ---- Example 2: if statement ----"<<endl;
    // if statement will run the codes in between the curly braces if the statement is TRUE.
    int num1 = 1;
    int num2 = 5;

    if(num1 == num2){
        cout<<"The numbers are equal"<<endl;
    }

    cout<<"End of example 2"<<endl;

    cout<<"\n ---- Example 3: if-else statement ----"<<endl;
    // if-else works as a switch. If 'if' statement is true, the program will run the code or use the if
    // statement and ignore the code of the 'else' statement
    // example to check which number, num1 or num2 is greater.
    if(num1>num2){
        cout<<"num1 is greater than num2"<<endl;
    }
    else{
        cout<<"num2 is greater than num1"<<endl;
    }

    cout<<"\n ---- Example 4: multiway statement ----"<<endl;
    // multiway checks more than 2 conditions
    // example compare if num1 is equal to, greater than, less than num2
    if(num1==num2){
        cout<<"num1 is equal to num2"<<endl;
    }
    else if(num1>num2){
        cout<<"num2 is greater than num1"<<endl;
    }

    cout<<"\n ---- Example 5: multiway statement: find the color depending of the"<<endl;
    /*
    - Ultraviolet: less than 170 on and greater than or equal to 10
    - Blue: 350 to 320, inclusive
    - Green: 521 to 580, inclusive
    - Red: 591 to 740
    - Infrared: more than 741
    - Any wavelength less than 10 is undefined
    */
   // Declare variables
   int wavelength = 0;
   string color;

   // collect the wavelength
   cout<<"Enter a wavelength: "<<endl;
   cin>>wavelength;

   if(wavelength<=379 && wavelength>=10){
    color = "ultraviolet";
   }
   else if(wavelength=520 && wavelength>=300)
    color = "blue";
   else if(wavelength<=550 && wavelength>=321)
    color = "green";
   else if(wavelength<=740 && wavelength>=591)
    color = "red";
   else if(wavelength>=741)
    color = "infrared";
   else
    color = "undefined";

   // print result
   cout<<"wavelength of "<<wavelength<<" units color "<<color<<endl;

   cout<<"\n ---- EXERCISE ----"<<endl;
   // Declare the variables
   char gpa = ' ';
   float final_exam = 0;
   float labs = 0;
   float homework = 0;
   float grade = 0;

   cout<<"Enter your final_exam grade: "<<endl;
   cin>>final_exam;

   cout<<"Enter your labs grade: "<<endl;
   cin>>labs;

   cout<<"Enter your homework grade: "<<endl;
   cin>>homework;

   cout<<"Your grade is: "<<final_exam *0.5 + labs * 0.3 + homework * 0.2<<endl;

   if (grade>=90){
    gpa = 'A';
   }
   else if (grade>=80 && grade<90)
    gpa = 'B';
   else if (grade>=70 && grade<80)
    gpa = 'C';
   else if (grade>=60 && grade<70)
    gpa = 'D';
   else if (grade<59)
    gpa = 'F';
   else
    gpa = 'undefined'; 

    cout<<"A final grade of "<<grade<<" is equivalent to a GPA of "<<gpa<<endl;

   

   // collect data final_exam, labs, and homework
   
   // calculate the grade final_exam * 0.5 + labs * 0.3 + homework * 0.2

   // multiway condition
    
    return 0;
}
