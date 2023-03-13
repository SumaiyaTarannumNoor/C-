//Knuth Morris Pratt (KMP) Algorithm: Given a text that has index from [0-(N-1)], try to find the patters [0-(M-1)], while N>M.
//This code is completely copied from: https://github.com/MISabic/dsa-implementation/blob/main/string%20matching/KMP/KMP.cpp
//It is done for learning purpose. I have zero credit in it's implementation.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> kmpTable(string pattern){

    int m = pattern.length();
    vector<int> pi(m);

    int k=0;
    for(int i=1; i<m; i++){
        while(k>0 && pattern[k] != pattern[i]){
            k = pi[k-1];
        }
        if (pattern[k] == pattern[i]) {
            k++;
        }
        pi[i] = k;
    }
    return pi;
}


int kmpSearch(string text, string pattern){

    int n = text.length();
    int m = pattern.length();

    vector<int> pi = kmpTable(pattern);

    int i=0, j=0;
    while(i<n){
        if (text[i] == pattern[j]) {
            i++;
            j++;
            if(j==m){
            return i-j;
            }

            else if (j>0) {
                j = pi[j-1];
            }

            else{
                i++;
            }
        }
        return -1; //when the patter is not found.
    }
}

int main(){

    string text = "Completely Copied.";
    string pattern = "Copied";

    int pos = kmpSearch(text, pattern);
    if (pos == -1) {
        cout << "Pattern couldn't be found." << endl;
    }
    else {
        cout << "Pattern found at position no: "  << pos << endl;
    }
    return 0;
}
