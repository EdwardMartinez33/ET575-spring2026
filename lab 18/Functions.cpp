/*
Edward Martinez
Lab 16
April 13, 2026
*/

#include<iostream>

using namespace std;

// example 1: search program
// function 1: function to collect up to 5 consecutive positive integers
// the collection will stop if a negative number is enetered.
// If there is less than five numbers collected, the function will reference to the array
void fillarray(int *arr, int &numberuserindex, int arraysize){
    int number=0, index = 0;
    do{
        cout<<"Enter a positive number: ";
        cin>>number;
        if(number>0){
            arr[index] = number;
            index++;
        }
    }while(number>0 && index < arraysize);
    
    // update the index of the last positive number
    numberuserindex = index;
}
// function 2: print each element in an array
void printelement(int *arr, int sizearray){
    for(int i = 0; i<sizearray; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

// function 3: search function
int search(int *arr, int numberuserindex, int target){
    int index = 0;
    bool found = false;

    while(!found && index<numberuserindex){
        if(target == arr[index])
        found = true;
        else
        index++;
    }
    if(found)
    return index;
    else
    return -1;
}

// EXERCISE
int collectnumber(int arr[], int maxsize){
    int count = 0;
    int num;
    cout<<"Enter 5 non-zero numbers: ";

    while(count<maxsize){
        cin>>num;

        if(num == 0){
            break;
        }
        arr[count] = num;
        count++;
    }
    return count;
}
float averagenumber(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return (float) sum / size;
}
int closestmean(int arr[], int size, float avg){
    int closest = arr[0];
    float mindiff = abs(arr[0] - avg);
    for(int i = 1; i < size; i++){
        float diff = abs(arr[i] - avg);
        
        if(diff<mindiff){
            mindiff = diff;
            closest = arr[i];
        }
    }
    return closest;
}
void printresult(float avg, int closest){
    cout<<"The closest number to average "<<avg<<" is "<<closest<<endl;
}