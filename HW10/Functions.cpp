/*
Edward Martinez
Homework 10
May 4, 2026
*/

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void readfile(string filename){
    ifstream fin;
    fin.open(filename);

    string eachline;
    while(getline(fin, eachline )){
        cout<<"Line 1 = "<<eachline<<endl;
    }
    fin.close();
}
void wordcount(string filename){
    ifstream fin;
    ofstream fout;
    fout.open(filename);

    string words;
    int count = 0;

    while(fin >> words ){
        count++;
    }
    fout<<"Edward Martinez \n "<<"Total number of words: "<<count<<endl;
    fin.close();
}
void earth(string filename){
    ifstream fin;
    ofstream fout;
    fout.open("wordcounts.txt, ios::app");

    string words;
    int count = 0;

    while(fin>>words){
        if(words == "Earth"){
            count++;
        }
    }
    cout<<"The word 'Earth' appears "<<count<<" times in the document"<<endl;
    fin.close();
}