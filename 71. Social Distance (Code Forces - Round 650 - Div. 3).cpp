#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        set<int>st;
        int ans = 0;
        for(int i=0; i<n;i++){
            if(s[i]=='1')
                st.insert(i);
        }
        for(int i=0; i<n;i++){
            if(s[i]=='0'){
                auto e = st.lower_bound(i-k);
                if(e == st.end() or *e>i+k){
                    ans++;
                    s[i]='1';
                    st.insert(i);
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
