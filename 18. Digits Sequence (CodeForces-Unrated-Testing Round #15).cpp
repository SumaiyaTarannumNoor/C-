#include <bits/stdc++.h>
using namespace std;

string digits;
long long len = 10000;
string intToString(int N){
    string str;
    while (N){
        int temp = (N%10);
        str += temp + '0';
        N /= 10;
    }
    reverse(str.begin(), str.end());
    return str;
}

void stringLine(){
    for(int i = 0; i<= len; i++)
        digits += intToString(i);
}

int main(){
    stringLine();
    int N;
    cin>>N;
    printf("%c\n", digits[N-1]);
    return 0;
}

