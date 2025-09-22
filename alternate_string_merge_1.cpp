#include <string>
#include <iostream>
using namespace std;

class Solution {
    public:
        string mergeAlternately(string word1, string word2) {
            string word3="";
            int i = 0, j = 0;

            while(i < word1.length() && j < word2.length()){
                word3 += word1[i++];
                word3 += word2[j++];
            }

            while(i < word1.length())
                word3 += word1[i++];
            
            while(j < word2.length())
                word3 += word2[j++];

            return word3;
        }
};

int main(int argc, char *argv[]){
    Solution alter;
    string word1, word2;
    cout << "Enter 1st word: ";
    cin >> word1;
    cout << "Enter 2nd word: ";
    cin >> word2;
    string result = alter.mergeAlternately(word1, word2);
    cout << result;
    return 0;
}