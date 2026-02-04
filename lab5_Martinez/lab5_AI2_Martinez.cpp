#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;

    // Ask user for a word
    cout << "Type a word: ";
    cin >> word;

    // Print the 2nd character
    char secondChar = word[1];
    cout << "2nd character: " << secondChar << endl;

    // Find and print the length
    int length = word.length();
    cout << "word has: " << length << " characters" << endl;

    // Replace 2 characters starting at the 3rd character (index 2)
    string replacedWord = word;
    if (replacedWord.length() >= 3) {
        replacedWord.replace(2, 2, "-- $ --");
    }
    cout << "Replace word: " << replacedWord << endl;

    // Remove last 3 characters
    string removedEnd = word;
    if (removedEnd.length() >= 3) {
        removedEnd.erase(removedEnd.length() - 3, 3);
    }
    cout << "Remove end characters: " << removedEnd << endl;

    return 0;
}

// --- AI Assistant Used: Copilot ---
// Q1) Was the code correct? (Yes/No and explain your answer)
// Yes the code was correct and functioned properly
// Q2) Was it readable and properly commented? explain your answer
// Yes it was readable and properly commented each part of the code
// Q3) Were you able to explain each line of code? explain your answer
// Yes I was able to explain each line of code
// Q4) Did it use the same programming concepts we learned in class? Explain which concepts were used and which ones were unfamiliar.
// It used different concepts like the 'if' 'char' 
// Q5) Terminal Output: (Paste the output of your program here)

//Type a word: hello
//2nd character: e
//word has: 5 characters
//Replace word: he-- $ --o
//Remove end characters: he