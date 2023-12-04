#include <bits/stdc++.h>

using namespace std;

bool check(string ans2, vector<string>&s){

    for(int i=0; i<s.size(); i++){
        int cnt = 0;
        for(int j=0; j<s[i].size(); j++){
            if(s[i][j] != ans2[j]) cnt++;
        }

    if(cnt >= 2)
        return false;
    return true;
    }
}

void solve(){
        int n, m;
        cin >> n >> m;
        vector<string>s(n);
        for(int i=0; i<n; i++) cin >> s[i];
        string ans = s[0];
        for(int i=0; i<m; i++){
            for(int j=0; j<26; j++){
                string ans2 = ans;
                ans2[i] = ('a' + j);
                if(check(ans2, s)){
                    cout << ans2 << "\n";
                    return;
                }
            }
        }
        cout << -1 << "\n";

}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

}
