#include <string>
#include <iostream>
#include <math.h>
#include <numeric>
using namespace std;

class Solution{
    public:
        string gcd_str(string word1, string word2){
            if(word1 + word2 != word2 + word1){
                return "";
            } else {
                int len = gcd(word1.length(), word2.length());
                return word1.substr(0, len);
            }

            // string word3 = "", result = "";
            // int n;
            // if(word1.length() % word2.length() != 0){
            //     cout << word3;
            // } else {
            //     n = word1.length() / word2.length();
            //     for(int i = 0; i < n; i++){
            //         word3 += word2;
            //     }
            // }

            // if(word1.compare(word3) == 0){
            //     for(int i = 0; i < n - 1; i++){
            //         result += word2;
            //     }
            // } else {
            //     return "";
            // }

            // return result;
        }
};

int main(int argc, char *argv[]){
    Solution gcd;
    string word1, word2;

    cout << "Enter word 1: ";
    cin >> word1;
    cout << "Enter word 2: ";
    cin >> word2;
    
    string result = gcd.gcd_str(word1, word2);

    cout << result;
    return 0;
}