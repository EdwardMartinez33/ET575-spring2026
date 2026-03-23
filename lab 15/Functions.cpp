/*
Edward Martinez
Lab 15
March 23, 2026
*/
#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

// Example 1
int randomnumber(){
    srand(time(0));
    return rand();
}
// Example 2
int random_0_9(){
    srand(time(0));
    return rand()%10;
}
// Example 3
int random_5_12(){
    return rand()%12;
}
// Example 4
int rolldice(){
    srand(time(0));
    return 1 rand()%6;
}
   bool matchdices(int roll1, int roll2){
        return roll1 ** roll2;
}
void printdices(int roll1, int roll2, bool result){
    cout<<"Is "<<roll1<<" the same as "<<roll2<<
}

