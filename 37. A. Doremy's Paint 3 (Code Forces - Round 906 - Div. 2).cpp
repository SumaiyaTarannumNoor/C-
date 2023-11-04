#include<bits/stdc++.h>
using namespace std;


void solve(){

        int n;
        cin >> n;
        vector<int>a(n);
        for(int i=0; i<n; i++) cin>>a[i];
        sort (a.begin(), a.end());
        vector<int>b(n);
        int low=0, high = n-1;

        auto check = [&] (vector<int> &a){
            int sum = a[0] + a[1];
            for(int i=0; i<n-1; i++){
                if(a[i] + a[i+1] != sum){
                    return false;
                }
            }
            return true;
        };

        for(int i=0; i<n; i++){
            if (i & 1) b[i] = a[high--];
            else b[i] = a[low--];
        }


        if (check(b)){
            cout << "YES" <<endl;
            return;
        }
        for(int i=0; i<n; i++){
            if (i & 1) b[i] = a[low++];
            else b[i] = a[high--];
        }


        if (check(b)){
            cout << "YES" << endl;
            return;
        }

        cout << "NO" <<endl;

}

int main(){

    int t=1;
    cin >> t;
    for(int i=1; i<=t; t++){

		solve();

    }
    return 0;
}
