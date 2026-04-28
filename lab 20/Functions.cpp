/*
Edward Martinez
Lab 20
April 27, 2026
*/

#include<iostream>
#include<fstream>

using namespace std;

// Example 1
int collectnumber(){
int n;
cout<<"Enter an number: ";
cin>>n;
if(cin.fail()){
cout<<"Error: input type mismatch!"<<endl;
cin.clear();
cin.ignore(10000, '\n');
return collectnumber();
}
else{
return n;
}


}

// Example 2
void readfile(){
ifstream fin; //declare input file as 'fin'

string line;

int linecounter = 1;

fin.open("samplefile.txt");

while(getline(fin, line)){
cout<<"Sentence "<<linecounter<<"\t"<<line<<endl;
linecounter++;
}
// Close the input file when finished reading.
fin.close();
}

// Example 3
void writefile(string filename){

ofstream fout;
fout.open(filename);
fout<<"Edward Martinez";
fout.close();
}
// Example 4
void appendmsg(string filename, string msg){
    ofstream fout;
fout.open(filename, ios::app);

for(int n = 3; n>=0 ; n--){
fout<<n<<endl;
}
// to write one single line
fout<<"GAME OVER!\n"<<msg<<endl;
// close file after process is complete
fout.close();

}

// EXERCISE
void create(){
    ofstream file("data_user.txt");
    file<<"This is my output file – Edward Martinez.\n";
    file.close();
}
void append(string msg){
    ofstream file("data_user.txt", ios::app);
    file<<msg<<endl;
    file.close();
}
void read(string filename){
    ifstream file(filename);
    string line;
    while(getline(file, line)){
        cout<<line<<endl;
    }
    file.close();
}