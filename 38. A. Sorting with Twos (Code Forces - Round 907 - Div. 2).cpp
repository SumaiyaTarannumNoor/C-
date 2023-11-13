#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int n;
        cin >> n;

        vector <int>a(n);
        for(int i=0; i<n; i++) cin>>a[i];

        int flag = 1;

        for(int i=1; i<n; i++){
            if(a[i-1]>a[i]){
                if(i != 1 && i != 2 && i != 4 && i != 8 && i != 16)
                    flag =0;
            }
        }

        if(flag) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}
