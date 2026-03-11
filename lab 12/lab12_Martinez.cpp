/*
Edward Martinez
Lab 12
March 11 2026
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"---- Example 1: Algorithm of a loop ----"<<endl;
    int count = 0;
    int i = 10;

    while(i>5){
        i--;
        if(i%2==0){
            count += i;
            continue;
        }
        count -= 3;
    }
    cout<<"Final count is = "<<count<<endl;



    cout<<"---- Example 2: Nested loop ----"<<endl;
    // A loop inside of another loop
    int outer = 0;
    while(outer++ < 3){
        cout<<"outer loop = "<<outer<<endl;

        // inner loop
        cout<<"inner loop = ";
        int inner = 0;
        while(inner++ < 5){
            cout<<inner<<"\t";
        }
        cout<<endl;
    }

    cout<<"---- Example 3: nested loop ----"<<endl;
    // Simulate a cinema data arrangement
    // Seats per row. rows = outer loop, seats = inner loop

    int rows, seats_row;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of seats per row: ";
    cin>>seats_row;

    // Display the seating arrangement
    cout<<"\nSeating Arrangement: \n";
    for(int r = 1; r <= rows; r++) {
        // Outer loop for rows
        for(int s = 1; s <= seats_row; s++){
            // Inner loop for seats
            cout<<"Row"<<r<<"Seat"<<s<<"\t";
        }
        cout<<endl;
    }

    cout<<"---- Example 4: ----"<<endl;
    const int dimension = 9;
    for(int row = 1; row <= dimension; row++){
        for(int col = 1; col <= dimension; col++){
            if(col==5 || row==5)
            cout<<"x";
            else
            cout<<".";
        }
        cout<<endl;
    }

    cout<<"---- Example 5: ----"<<endl;
    const int dimensions = 10;
    for(int row = 1; row <= dimensions; row++){
        for(int col = 1; col <= dimensions; col++){
            if(((col==3 || col==4) && (row>=3 && row<=8)) || 
            (row>=5 && row<=6 && col>=5 && col<=6) || 
            (col>=7 && col<=8 && row>=3 && row<=8))
            cout<<"%";
            else
            cout<<".";
        }
        cout<<endl;
    }

      int sum=0, counts=0;
    for (int n = 20; n> 0; n-=2){
        if (n%3 ==0){
            counts++;
            continue;
        }
        sum += n;
    }
    cout<<"The sum is: "<<sum<<endl<<"The count is: "<<counts<<endl;

    int e=0, add=0;
    while(e<=10){
        e++;
        if(e<5 && e !=2){   
            cout<<"e = "<<e<<endl;
            }
        else{continue;}
        add +=e;
    }
    cout<<"Add = "<<add<<endl;


 
    
    return 0;
}