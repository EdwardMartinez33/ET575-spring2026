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
    ifstream fin(filename);

    string eachline;
    while(getline(fin, eachline )){
        cout<<eachline<<endl;
    }
    fin.close();
}
void wordcount(string filename){
    ifstream fin(filename);
    ofstream fout("wordcounts.txt", ios::app);

    string words;
    int count = 0;

    while(fin >> words ){
        count++;
    }
    fout<<"Edward Martinez \n "<<"Total number of words: "<<count<<endl;
    fin.close();
    fout.close();
}
void earth(string filename){
    ifstream fin(filename);
    ofstream fout("wordcounts.txt", ios::app);
    
    string words;
    int count = 0;

    while(fin>>words){
        if(words == "Earth"){
            count++;
        }
    }
    fout<<"The word 'Earth' appears "<<count<<" times in the document"<<endl;
    fin.close();
    fout.close();
}