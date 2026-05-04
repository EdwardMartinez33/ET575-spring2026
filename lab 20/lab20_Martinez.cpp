/*
Edward Martinez
Lab 20
April 27, 2026
*/

#include<iostream>
#include "Functions.cpp"

using namespace std;

int main(){
    cout<<"---- Example 1: Collect a number ----"<<endl;
    int n = collectnumber();
    cout<<"Collected number = "<<n<<endl;

    cout<<"---- Example 2 ----"<<endl;
    //readfile("samplefile.txt");

    cout<<"---- Example 3 ----"<<endl;
    writefile("intro.txt");

    cout<<"---- Example 4 ----"<<endl;
    appendmsg("samplefile.txt", "Edward Martinez");

    cout<<"---- Example 5: check if a file exists ----"<<endl;
    checkfile("samplefile.txt");

    cout<<"---- EXERCISE ----"<<endl;
    create();

    string name;
    cout<<"Enter your full name: ";
    getline(cin, name);
    
    append(name);
    read("data_user.txt");

    return 0;
}