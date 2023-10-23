#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
    int t = 1;
    cin >> t;
    for(int i=1; i<=t; i++){
        int n;
        cin>>n;
        long long total = 0;
        for(int i=0; i<n; i++){
            long long x;
            cin >> x;
            total += x;
        }

        long long extra = total%n;
        long long one = n - extra;
        long long two = extra;
        cout << one*two << endl;
    }
}
