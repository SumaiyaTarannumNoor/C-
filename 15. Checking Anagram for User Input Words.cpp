#include <bits/stdc++.h>
using namespace std;

bool areAnagram(string str1, string str2){
    int n1 = str1.length();
    int n2 = str2.length();

    if (n1 != n2){
        return false;
    }
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    //compare
    for(int i =0; i<= n1; i++){
        if(str1[i] != str2[i]){
        return false;
        }
    }

    return true;
}

int main(){
   string word1, word2;
   cout << "enter two words: \n";
   cin >> word1 >> word2;
   if (areAnagram(word1, word2)){
       cout << "The words are Anagram.";
   }
   else{
       cout << "They are not anagram.";
   }
   return 0;
}
