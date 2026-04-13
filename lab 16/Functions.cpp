/*
Edward Martinez
Lab 16
April 13, 2026
*/

#include<iostream>

using namespace std;

// Example 1: pointer and reference
void pointerreference(){
int num = 12;
char c = 'T';
string n = "Peter";

// declare the pointers
int* pointerint;
char* pointerchar;
string* pointerstring;

// check a pointer
cout<<"Int pointer memory address = "<<pointerint<<endl;

// pointer initialized with the memory address of a variable
pointerint = &num;
pointerchar = &c;
pointerstring = &n;

// check reference value of each pointer
cout<<"Reference of pointerint \t"<<pointerint<<endl;
cout<<"Reference of pointerchar \t"<<pointerchar<<endl;
cout<<"Reference of pointerstring \t"<<pointerstring<<endl;

// dereference operator to print the value of the memory address that each
// pointer is holding
cout<<"dereference pointerint \t\t"<<*pointerint<<endl;
cout<<"dereference pointerstring \t"<<*pointerstring<<endl;
cout<<"dereference pointerchar \t"<<*pointerchar<<endl;

}
// Example 2: pass pointer into a function
// pass a value
void printvalue(string n){
    cout<<"Value = "<<n<<endl;
}

// pass a pointer
void printaddress(string* n){
    cout<<"Pointer = "<<n<<endl;
}

// pass a reference value
void printreference(string& n){
   cout<<"Pointer value = "<<n<<endl;
}

void innerarray(){
    int score[5]; // declared an array of five elements
    cout<<score<<endl;

score[0] = 60; // The first element has index 0
score[1] = 30;
score[2] = 75;
score[3] = 79;
score[4] = 98; // The last element has index 4 (array length-1)
cout<<"4th score = "<<score[3]<<endl;

int avg = (score[0] +score[1] +score[2] +score[3] +score[4])/5;
cout<<"The average is "<<avg<<endl;

char sym[3]; // char array with 3 elements
sym[0] = '%';
sym[1] = 'A';
sym[2] = '$';
cout<<sym<<endl;
cout<<"3rd element in sym[] array = "<<sym[2]<<endl;
double batteryLifeInHours[4]; // double array with 4 elements
batteryLifeInHours[0] = 2.1;
batteryLifeInHours[1] = 3.2;
batteryLifeInHours[2] = 4.5;
batteryLifeInHours[2] = 4.5;
cout<<"2nd element is array batteryLifeHours "<<batteryLifeInHours[1]<<endl;
}