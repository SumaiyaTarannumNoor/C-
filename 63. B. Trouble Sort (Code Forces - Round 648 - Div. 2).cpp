#include <bits/stdc++.h>

 using namespace std;

 void solve(){
        int n;
        cin >> n;
        vector<pair<int, int>>arr(n);
        for(int i=0; i<n; i++) cin >> arr[i].first;
        for(int i=0; i<n; i++) cin >> arr[i].second;

        bool flag = 1;
        for(int i=0; i<n-1; i++){
            if(arr[i+1].first >= arr[i].first){}
            else{
                flag = 0;
                break;
            }
        }
        if(flag==1){
            cout << "Yes"  << "\n";
            return;
        }
        int zero = 0;
        int one = 0;
        for(int i=0; i<n; i++){
            if(arr[i].second == 0) zero++;
            else one++;
        }
        if(one && zero) cout << "Yes" << "\n";
        else cout << "No" << "\n";
 }

 int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

 }
