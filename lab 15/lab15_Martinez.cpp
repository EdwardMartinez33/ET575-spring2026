/*
Edward Martinez
Lab 15
March 23, 2026
*/

#include<iostream>
#include "Functions.cpp"

using namespace std;

int main(){
    cout<<"---- Example 1 ----"<<endl;
    cout<<randomnumber()<<endl;

    cout<<"---- Example 2 ----"<<endl;
    cout<<random_0_9()<<endl;

     cout<<"---- Example 3 ----"<<endl;
     cout<<random_5_12()<<endl;

     cout<<"---- Example 4 ----"<<endl;
     int roll1 = 1+rand()%6;
     cout<<endl<<endl;
     int roll2 = rolldice();
     bool resultmatch = matchdices(roll1, roll2);
     printdices(roll1,roll2,resultmatch);

     cout<<"---- Exercise ----"<<endl;
     srand(time(0));
     int d1 = random_1_6();
     int d2 = random_1_6();
     cout<<"Die 1: "<<d1<<endl;
     cout<<"Die 2: "<<d2<<endl;

     bool result = twodice(d1,d2);
     printresult(result);

     string something = "ET575";
    printvalue(something);	 			
    passref(something); 		 			
    printvalue(something);				
    passmemory(&something);

    return 0;
}