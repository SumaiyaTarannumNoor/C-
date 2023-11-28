#include <bits/stdc++.h>

using ll = long long;

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){

        ll n;
        cin >> n;
        ll m = (n+1)/2;

        ll ans = 8*((m*(m+1)*(2*m+1))/6 - 2LL*(m*(m+1))/2 + m);



        cout << ans << "\n";

    }

}
