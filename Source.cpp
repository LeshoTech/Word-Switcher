#include<iostream>
using namespace std;

string spinWords(string);

int main() {

    string word;

    cout << "\nEnter a word. ";
    cin >> word;

    spinWords(word);
}

/* Write a function that takes in a string of one or more words,
and returns the same string, but with all five or more letter words reversed
(like the name of this kata).
*/

string spinWords(string word) {


    for (int i = 0; i < word.length(); i++) {

        cout << word[i];

    }

}