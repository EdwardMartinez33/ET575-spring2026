/*
Edward Martinez
Homework 4 - loops
*/

#include<iostream>
#include<cmath>

using namespace std;

// Program 1
int speed(){
    int windspeed;
    cout<<"Enter windspeed: ";
    cin>>windspeed;
    if(windspeed >0 && windspeed <100){
        return windspeed;
    }
    else{
        cout<<"Error. Enter windspeed between 0 and 100: ";
        return speed();
    }
}
float temp(){
    float temperature;
    cout<<"Enter temperature: ";
    cin>>temperature;
    if(temperature <=10 && temperature > -90){
        return temperature;
    }
    else{
        cout<<"Error. Enter temperature between -90 and 10";
        return temp();
    }
}
float wind_speed(int windspeed, float tem){
    return 33-(10 * sqrt(windspeed) - windspeed + 10.5) * (33 - tem);
}
void prompt_result(float result){
    cout<<"The wind index is: "<<result<<endl;
}
// Program 2
int collectnumber(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    return n;
}
bool inorder(int num1, int num2, int num3){
  if(num1 >= num2 && num2 >= num3){
    return true;
  }
  else{
    return false;
  }
}
bool order_result(int num1, int num2, int num3){
    bool result = inorder(num1, num2, num3);
    cout<<num1<<"\t"<<num2<<"\t"<<num3<<endl;
    if(result){
        cout<<"Numbers are in descending order"<<endl;
    }
    else{
        cout<<"Numbers are not in descending order"<<endl;
    }
    return result;
}
void runProgram(int num1, int num2, int num3, bool desc_order){
    char choice;
    cout<<"Do you want to run the program again? y/n: ";
    cin>>choice;
    
    switch(choice){
        case 'y' : case 'Y':
        num1 = collectnumber();
        num2 = collectnumber();
        num3 = collectnumber();

        bool desc_order = order_result(num1,num2,num3);
        runProgram(num1,num2,num3,desc_order);
    }
}