#include <bits/stdc++.h>

using namespace std;

void solve(){

    int n, x;
    cin >> n >> x;
    int even = 0;
    int odd = 0;
    for(int i=0; i<n; i++){
        int k;
        cin >> k;
        if(k%2) odd++;
        else even++;
    }
    if(odd==0){
        cout << "No" << "\n";
        return;
    }
    for(int i=1; i<=odd; i+=2){
        if(i>x) break;
        if((x-i) <= even){
            cout << "Yes" << "\n";
            return;
        }
    }
    cout << "No" << "\n";

}

int main(){
    int t;
    cin >> t;
    while(t--){
     solve();
    }
    return 0;
}
