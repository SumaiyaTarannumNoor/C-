#include <bits/stdc++.h>

using namespace std;

void solve(){

    int n;
        cin >> n;
        vector<int>c(n);
        for(auto &f: c) cin >> f;
        sort(c.begin(), c.end());
        for(int i=n-1; i>= 0; i--){
            if(c[i] <= i+1){
                cout << i+2 << "\n";
                return;
            }
        }
        cout << 1 << "\n";

}


int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
