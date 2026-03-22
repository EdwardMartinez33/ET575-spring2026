/*
Edward Martinez
Lab 14
March 18, 2026
*/

#include<iostream>
#include "Function_Martinez.cpp"

using namespace std;

int main(){
    cout<<"---- Example 1 ----"<<endl;
    cout<<"Result: "<<calculateddouble<<endl;

    cout<<"---- Example 2 ----"<<endl;
    cheers(4);

    cout<<"---- Example 3 ----"<<endl;
    int n = linearfunction(3);
    cout<<"The total of linearfunction is "<<n<<endl;

    cout<<"---- Example 4 ----"<<endl;
    int side1 = collectnumber();
    int side2 = collectnumber();
    float h = hypotenuse(side1, side2);
    printresult(side1, side2, h);

    cout<<"---- EXERCISE ----"<<endl;
   int x1, y1, x2, y2;

    cout<<"Enter x1: ";
    x1 = collectsnumber();

    cout<<"Enter y1: ";
    y1 = collectsnumber();

    cout<<"Enter x2: ";
    x2 = collectsnumber();

    cout<<"Enter y2: ";
    y2 = collectsnumber();

    printdistance(x1, x2, y1, y2);
    return 0;
}