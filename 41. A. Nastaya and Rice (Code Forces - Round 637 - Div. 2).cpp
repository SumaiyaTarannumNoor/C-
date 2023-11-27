#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        int small = n * (a - b);
        int big = n * (a + b);
        if(small > (c+d) || big < (c-d))
            cout << "No\n" ;
        else
            cout << "Yes\n";

    }
   return 0;
}
