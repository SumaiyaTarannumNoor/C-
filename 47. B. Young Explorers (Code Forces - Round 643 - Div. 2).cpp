#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map <int, int> mp;
        for(int i=0; i < n; i++){
            int k;
            cin >> k;
            mp[k]++;
        }
        int total = 0;
        int left = 0;
        for(auto i: mp){
            i.second += left;
            total += (i.second/i.first);
            left = i.second % i.first;
        }
        cout << total << "\n";
    }
    return 0;
}
