/*
Edward Martinez
Lab 20
April 27, 2026
*/

#include<iostream>

using namespace std;

// Example 1
int collectnumber(){
int n;
cout<<"Enter an integer: ";
cin>>n;
if(cin.fail()){
cout<<"Error: input type mismatch!"<<endl;
cin.clear();
cin.ignore(10000, '\n');
return collectnumber();
}
else
return n;

cin.clear();
cout<<"Wrong data type"<<endl;
cin.clear();
cin.ignore(10000,n);
}

// Example 2
#include<fstream>
#include<string>

using namespace std;

int main(){
ifstream fin; //declare input file as 'fin'
ofstream fout; // declare output file as 'fout'
fin.open("SampleInput.txt");

string line;

int linecounter = 1;
while(getline(fin, line)){
cout<<"Sentence "<<linecounter<<"\t"<<line<<endl;
linecounter++;
}
// Close the input file when finished reading.
fin.close();

// Example 3
fout.open("outputfile.txt");
// write the following text to file 'outputfile.txt'
for(int n =1; n<=3 ; n++){
fout<<"Good morning "<<n<<endl;
}

// Example 4
void append(string filename)
fout.open("SampleInput.txt", ios::app);
// write the following text to file 'samplefile.txt'
for(int n = 3; n>=1 ; n--){
fout<<n<<endl;
}
// to write one single line
fout<<"GAME OVER!"<<endl;
// close file after process is complete
fout.close();
return 0;
}
