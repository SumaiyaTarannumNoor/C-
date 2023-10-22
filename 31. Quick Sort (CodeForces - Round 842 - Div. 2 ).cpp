#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int num = 1;
    int total = 0;
    for(int i; i<n; i++){
        if(a[i]==num){
            num++;
        }
        else{
            total++;
        }
    }
    int ans = (total+k-1)/k;
    cout << ans <<"\n";
}

int main(){
    int t=1;
    cin >> t;
    for(int i=1; i<=t; i++){
        solve();
    }

    return 0;
}
