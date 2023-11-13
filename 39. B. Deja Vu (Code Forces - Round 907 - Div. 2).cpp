#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int n, q;
        cin >> n >> q;

        vector<long long int>a(n), x(q);

        for(auto &e: a) cin >> e;
        for(auto &e: x) cin >> e;

        vector<vector<int>> div(31);
        vector <int> check(n);

        for(int i=30; i>=0; i--){
            for(int j=0; j<n; j++){
                if(check[j]) continue;

                if((a[j]%(1ll<<i))==0){
                    check[j] = 1;
                    div[i].push_back(j);
                }
            }
        }

        for(auto e: x){
            for(int i=e; i<=30; i++){
                for(auto j: div[i]){
                    div[e-1].push_back(j);
                    a[j] += (1ll<<(e-1));
                }

                div[i].clear();
            }
        }

        for(auto &e: a) cout << e << " ";
        cout << "\n";
    }

    return 0;
}
