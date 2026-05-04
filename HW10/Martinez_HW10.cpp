/*
Edward Martinez
Homework 10
May 4, 2026
*/

#include<iostream>
#include"Functions.cpp"

using namespace std;

int main(){
    string filename = "Remembering_Earth.txt";
    readfile(filename);
    wordcount(filename);
    earth(filename);

    return 0;
}