#include <bits/stdc++.h>

using namespace std;

void solve(){



}

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> s(n);

        for(auto &w : s) cin >> w;

        bool ans = true;

        for(int i = n-2; i >= 0; i--){
            for(int j = n-2; j>=0; j--){
                if(s[i][j]=='1' && s[i+1][j]=='0' && s[i][j+1]=='0') ans = false;
            }
        }
        cout << (ans ? "YES" : "NO") << "\n";
    }
    return 0;
}
