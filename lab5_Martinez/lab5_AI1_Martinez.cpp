/*
Edward Martinez
Lab 4 – String Exercise
Feb 2, 2026
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;

    // ask user for input
    cout << "Enter a word: ";
    cin >> word;

    // print 2nd character
    cout << "\n2nd character:          " << word[1] << endl;

    // find and print length
    cout << "\nword has:             " << word.length() << " characters" << endl;

    // replace 2 characters from the 3rd character
    word.replace(2, 2, "--$--");
    cout << "\nReplace word:         " << word << endl;

    // remove 3 characters from the end
    word.erase(word.length() - 3, 3);
    cout << "\nRemove end characters:    " << word << endl;

    return 0;
}

// --- AI Assistant Used: ChatGPT ---
// Q1) Was the code correct? (Yes/No and explain your answer)
//Yes because when I ran it in the terminal and entered a word, it gave me the 2nd character, word length, replaced the word, and removed end characters
// Q2) Was it readable and properly commented? explain your answer
// It was readable, It explained the code and I understood the comments
// Q3) Were you able to explain each line of code? explain your answer
//Yes I explained each line of code for each step of the lab
// Q4) Did it use the same programming concepts we learned in class? Explain which concepts were used and which ones were unfamiliar.
//Yes it was very similar as in it used the same functions like length, erase, and replace 
// Q5) Terminal Output: (Paste the output of your program here)
//Enter a word: hello

//2nd character:          e

//word has:             5 characters

//Replace word:         he--$--o

//Remove end characters:    he--$