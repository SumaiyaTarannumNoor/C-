#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int suf0=0, suf1=0;
        for(int i=0; i<n; i++){
            if(s[i]=='0')
                suf0++;
            else
                suf1++;

        }
        int ans = min(suf1, suf0);
        int pref0 = 0, pref1 =0;
        for(int i=0; i<n; i++){
            if(s[i]=='0') pref0++;
            else pref1++;
            if(s[i]=='0') suf0--;
            else suf1--;

            ans = min(ans, pref1+suf0);
            ans = min(ans, pref0+suf1);
        }
        cout << ans << "\n";
    }

}
