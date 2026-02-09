/*

Homework 1: strings, string methods, and numerical variables

Edward Martinez

*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string welcome = "Welcome to ";
    string city = "New York City";

    string name;
    cout<<"Enter your name: ";
    cin>>name;

    string message = welcome + city + " " + name;

    int messagelength = message.length();

    int index = message.find("ma");

    string replacedmessage = message;
    if (index != string::npos){
        replacedmessage.replace(index,2,"%----%");
    }

    cout<<"----Activity 1----"<<endl;

    cout<<"concatenated message: "<<message<<endl;
    cout<<"Message length: "<<messagelength<<endl;
    cout<<"Index of character 'ma': "<<index<<endl;
    cout<<"Replace 'ma' with %----%: "<<replacedmessage<<endl;

    const float pi = 3.14159;

    float radius;
    float height;
    
    cout<<"Enter radius: "<<endl;
    cin>>radius;
    
    cout<<"Enter height: "<<endl;;
    cin>>height;

    bool radiusgreater = radius > height;

    bool radiusequal = radius == height;

    height *= 3;
    radius += 5;

    bool logic = (radius != height) && (radius > height);

    float volume = pi*radius*radius*height;

    cout<< "----Activity 2----"<<endl;

    cout<<"Step 3) Is the radius greater than height? "<<radiusgreater<<endl;
    cout<<"Step 4) Is the radius equal to height? "<<radiusequal<<endl;
    cout<<"Step 5) Triple height = "<<height<<"cm"<<endl;
    cout<<"Step 5) Increased radius by 5 = "<<radius<<"cm"<<endl;
    cout<<"Step 6) Is the radius not equal to and greater than height ? "<<logic<<endl;
    cout <<"Step 7) The volume of a right cylinder with radius "<<radius<<"cm and height "<<height<<"cm is = "<<volume<<"cm^3"<<endl;
        
}
