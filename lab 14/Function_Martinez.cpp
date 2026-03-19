/*
Edward Martinez
Lab 14
March 18, 2026
*/

#include<iostream>

using namespace std;

// Example 1
int multiply(int a, int b){
    return a * b;
}
int calculateddouble(){
    return 2*(multiply(2,3));
}
// Example 2
void cheers(int n){
    if(n==1){
        cout<<"STOP"<<endl;
    }
    else{
        cout<<(n * 2)<<"\t";
        cheers(n-1);
    }
}
/*Analyze iteration
iteration | int n | if(n==1) true or false? | cout<<(n * 2) | else cheers(n-1)
------------------------------------------------------------------------------
    1     |   4   |          false          |cout<<(4*2)=8  | cheers(4-1)=cheers(3) 
    2     |   3   |          false          |cout<<(3*2)=6  | cheers(3-1)=cheers(2)                                       
    3     |   2   |          false          |cout<<(2*2)=4  | cheers(2-1)=cheers(1)
    4     |   1   |          true           |  skip         |  skip
*/
// Example 3
int linearfunction(int m){
    if (m>10){
        return -6;
    }
    else{
        return(linearfunction(m+2) * (m-4));
    }
}
/*
Iteration | int m | if(m>10) return -6 | else return(linearfunction(m+2) * (m-4)); 
1         |  3    |     False          | (3+2=5) * (3-4=-1)
2         |  5    |     False          | (5+2=7) * (5-4=1) *-1
3         |  7    |     False          | (7+2=9) * (7-4=3) *1 *-1
4         |  9    |     False          | (9+2=11) * (9-4=5) *3 *1 *-1
5         |  11   |     True, return -6| STOP
*/

// Example 4
int collectnumber(){
    int n;
    cout<<"Enter a number between: ";
    cin>>n;

    if(n<=0){
        cout<<"Error ";
        return collectnumber();
    }
    else{
        return n;
    }
}
#include<cmath>

float hypotenuse(int side1, int side2){
    return (sqrt(pow(side1,2)+pow(side2,2)));
}

void printresult(int side1, int side2, float h){
    cout<<"A right triangle with side "<<side1<<" and "<<side2<<" is "<<h<<endl;
}
// EXERCISE
int collectsnumber(){
int num;
cout<<"Enter a number: ";
cin>>num;

if (num<=0){
cout<<"Error ";
    return collectsnumber();    
}
else{
    return num;
}
}
#include<cmath>
float distance(int x1, int x2, int y1, int y2){
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)); 
}
void printdistance(int x1, int x2, int y1, int y2){
    cout<<"The distance of points ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is "<<distance(x1,x2,y1,y2)<<endl;
}