#include <bits/stdc++.h>

using namespace std;

int main(){

    int v, t;
    while(cin >> v >> t){
    if(-100 <= v && v <= 100 && 0 <= t && t <= 200 ){
        cout << v*(2*t) << endl;
    }
    else
        break;
    }
    return 0;

}


