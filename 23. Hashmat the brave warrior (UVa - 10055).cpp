#include <bits/stdc++.h>

using namespace std;

int main(){
    long long unsigned hashmat, opponent;
    while(cin >> hashmat >> opponent){
        if(hashmat > opponent) swap(hashmat, opponent);
        cout << opponent - hashmat << endl;
    }
}
