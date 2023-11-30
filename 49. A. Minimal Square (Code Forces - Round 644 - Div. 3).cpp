#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a<b) swap(a,b);
        int length = max(a, 2*b);
        cout << length * length << "\n";
    }
    return 0;
}
