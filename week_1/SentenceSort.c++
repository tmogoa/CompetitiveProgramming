#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        vector <string> sentence;

        sentence.assign(9, "");

        stringstream ss(s);

        string word;

        int numWords = 0;

        while(ss >> word){

            numWords++;

            int wordLength = word.length() - 1;

            int index = stoi(word.substr(wordLength, 1));

            string extractedWord = word.substr(0, wordLength);
            
            sentence[index - 1] = extractedWord;
        }

        string sortedSentence = "";

        int i = 0;

        while(i < numWords - 1){
            sortedSentence += sentence[i];
            sortedSentence += " ";
            i++;
        }

        sortedSentence += sentence[i];

        return sortedSentence;
    }
};