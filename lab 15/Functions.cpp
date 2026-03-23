/*
Edward Martinez
Lab 15
March 23, 2026
*/
#include<iostream>
#include<cstdlib>
#include<ctime>

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
    srand(time(0));
    return 5 + rand()%8;
}
// Example 4
int rolldice(){
    srand(time(nullptr));
    return 1+rand()%6;
}
   bool matchdices(int roll1, int roll2){
        return roll1 == roll2;
}
void printdices(int roll1, int roll2, bool result){
    cout<<"Is "<<roll1<<" the same as "<<roll2<<"? "<<result<<endl;
}
// Exercise
int random_1_6(){
    return 1+ rand()%6;
}
bool twodice(int d1, int d2){
    if(d1 == 1 && d2 == 1){
        return true;
    }
    else{
        return false;
    }
}
void printresult(bool result){
    if(result){
        cout<<"Congrats! You got a snake eyes"<<endl;
    }
    else{
        cout<<"Better luck next time"<<endl;
    }
        
}