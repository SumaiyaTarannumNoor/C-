#include<bits/stdc++.h>

using namespace std;

void solve(){

        int n;
        cin >> n;
        vector<int>a(n);
        for(auto &e: a) cin >> e;
        sort(a.begin(), a.end());
        for(int i=1; i<=1024; i++){
            vector<int>b;
            for(int j=0; j<n; j++) b.push_back(i^a[j]);
            sort(b.begin(), b.end());
            if(a==b){
                cout << i << "\n";
                return;
            }
        }
        cout << -1 <<"\n";

}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
