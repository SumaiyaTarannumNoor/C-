#include <bits/stdc++.h>

using ll = long long;

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int>a(n);
        vector<int>b(n);

        for(auto &e: a) cin >> e;
        for(auto &e: b) cin >> e;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());

        for(int i=0; i<k; i++){
            if(a[i]<b[i]) swap(a[i], b[i]);
            else break;
        }

        ll sum = 0;
        for(int i=0; i<n; i++) sum += a[i];

        cout << sum << "\n";
    }
    return 0;
}
