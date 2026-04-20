/*
Edward Martinez
Lab 16
April 13, 2026
*/

#include<iostream>
#include<string>

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

void introarray(){
    int scores[5]; // declared an array of five elements

scores[0] = 90; // The first element has index 0
scores[1] = 70;
scores[2] = 86;
scores[3] = 92;
scores[4] = 60; // The last element has index 4 (array length-1)

// find the average of the scores
float average = scores[0]+scores[1]+scores[2]+scores[3]+scores[4]/5.0;
cout<<"The average is "<<average<<endl;

// initialize an array
char sym[3] = {'%', '$', '#'}; // char array with 3 elements

// initialize an array without an array's size
string names[] = {"Peter","Annie"};

cout<<"The first name is = "<<names[0]<<endl;


}
// example 4: length of an array
void lenghtarray(){
    // sizeof function returns the number of bytes of value
    cout<<"character = "<<sizeof(char)<<endl;
    cout<<"string = "<<sizeof(string)<<endl;
    cout<<"integer = "<<sizeof(int)<<endl;
    cout<<"float = "<<sizeof(float)<<endl;
    cout<<"double = "<<sizeof(double)<<endl;

    // array
    int numbers[] = {2,7,9,-10,3};

    cout<<"length of array numbers = "<<sizeof(numbers)<<endl;
    // to find the number of values in an array = total size of an array / size of the data
    cout<<"There is "<<(sizeof(numbers)/sizeof(int))<<" values in an array"<<endl;
}

// example 5: loop through an array
void looparray(){
    int s = 5;
    int arr[s] = {1,2,3,4,5};
    
    // create a pointer to arr
    int *ptr_array = arr;

    // loop through an array
    for(int index = 0; index < s ; index++){
        cout<<"index = "<<index<<"has value = "<<arr[index]<<endl;

    }
}

// example 6: pass an array to a function
// function to populate data into an array
void fillup(int arraysize, int arrnumbers[]){
    for(int index = 0; index < arraysize; index++){
        cout<<"Enter a number: ";
        cin>>arrnumbers[index];
    }
}
// function to print all data in an array
void printarray(int arraysize, int arrnumbers[]){
    for(int index = 0; index < arraysize; index++){
        cout<<arrnumbers[index]<<"\t";
    }
    cout<<endl;
}

// functio to find the maximum number in an array
int maxnumber(int arraysize, int* arrnumbers){
    int maxvalue = arrnumbers[0];
    for(int index = 0; index < arraysize; index++){
        if(arrnumbers[index]>maxvalue){
            maxvalue = arrnumbers[index];
        }
    }
    return maxvalue;
}

// EXERCISE
void lowestarray(){
int score[5];
score[0] = 60;
score[1] = 90;
score[2] = 75;
score[3] = 88;
score[4] = 100;

int lowest = score[0];

for(int i = 0; i < 5; i++){
    if(score[i] < lowest){
        lowest = score[i];
    }
}
cout<<"The lowest score is "<<lowest<<endl;
}