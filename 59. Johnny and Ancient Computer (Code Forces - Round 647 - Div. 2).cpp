#include <bits/stdc++.h>

using namespace std;

void solve(){

    long long a, b;
    cin >> a >> b;
    if(a==b){
        cout << 0 << "\n";
        return;
    }
    if(a>b) swap(a, b);
    long long n;
    if(b%a != 0){
        cout << -1 << "\n";
        return;
    }
    else n=b/a;
    long long total = 0;
    while (n%8==0){
        total++;
        n=n/8;
    }
    while (n%4==0){
        total++;
        n=n/4;
    }
    while (n%2==0){
        total++;
        n=n/2;
    }
    if(n!=1){
        cout << "-1" << "\n";
        return;
    }
    else
        cout << total << "\n";

}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
