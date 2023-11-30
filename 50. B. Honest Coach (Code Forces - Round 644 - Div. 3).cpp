#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        for(auto &e: a) cin >> e;
        sort(a.begin(), a.end());
        int mini = INT_MAX;
        for(int i=0; i<n-1; i++) mini = min(mini, a[i+1]-a[i]);
        cout << mini << "\n";
    }
    return 0;
}
