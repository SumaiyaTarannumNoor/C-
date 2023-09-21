#include <bits/stdc++.h>

using namespace std;

int main(){

    int m, n;
    while(cin >> m >> n){
    if(1 <= m && m <= 300 && 1 <= n && n <= 300 ){
        cout << m*n - 1 << endl;
    }
    else
        break;
    }
    return 0;
}
