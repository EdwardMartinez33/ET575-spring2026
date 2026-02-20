// AI code
#include <iostream>
using namespace std;

//int main() {
   // double celsius, fahrenheit;

    //cout << "Enter temperature in Celsius: ";
    //cin >> celsius;

    // Conversion formula
   // fahrenheit = (celsius * 9.0 / 5.0) + 32;

    //cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

   // return 0;
//}

// 1. Does the AI code use C++ concepts you're unfamiliar with? Explain.
// No, the AI uses the same concepts as we learned in class 

// 2. Are there any issues or improvements you noticed? Explain.
// I ran the code and there are no issues that I noticed.

// 3. What test cases did you try, and why? Explain.
// I ran it and entered 20 celsius to see if it would convert the temperature
// and it did, it gave me 68 fahrenheit.

// Modified code
#include <iostream>
using namespace std;

int main() {
    int conversion_type;
    double celsius, fahrenheit;

    cout << "Choose conversion type: ";
    cout << "\n1.Celsius to Fahrenheit";
    cout << "\n2.Fahrenheit to Celsius";
    cout << "\nEnter choice: ";
    cin >> conversion_type;

    switch(conversion_type){
        case 1:
        cout<<"Enter temperature in celsius: ";
        cin>> celsius;
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        cout << celsius <<".0C"<< " is " << fahrenheit <<".0F"<< endl;
        break;

        case 2:
        cout<<"Enter temperature in fahrenheit: ";
        cin>> fahrenheit;
        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        cout << fahrenheit <<".0F"<< " is " << celsius <<".0C"<< endl;
        break;

    }

}