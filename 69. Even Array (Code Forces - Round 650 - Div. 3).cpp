#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(auto &i: arr) cin >> i;

        int even = 0;
        int odd = 0;
        int fine = 0;

        for(int i=0; i<n; i++){
            if(i%2==0){
                if(arr[i]%2 == 0) fine++;
                else even++;
            }
            else{
                if(arr[i]%2 == 1) fine++;
                else odd++;
            }
        }
        if(fine == n)
            cout << 0 << "\n";
        else if(odd == even)
            cout << even << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}
