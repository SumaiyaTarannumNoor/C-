#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        long long a, b;
        cin >> a >> b;
        if(a>b) swap(a,b);
        long long ans = b-a;
        if(ans==0) cout<< 0<< " "<<0<< endl;
        else{
            long long x = (ans - a%ans);
            long long y = a%ans;
            cout << ans << " "<< min(x,y)<< endl;
        }
    }

    return 0;

}
