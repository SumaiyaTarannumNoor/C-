#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        int divisible = 0;
        int sum = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i] % k == 0) divisible ++;
            sum += arr[i];
        }
        if(divisible == n){
            cout << -1 << "\n";
        }
        else if(sum % k !=0){
            cout << n << "\n";
        }
        else{
            int minimum = 0;
            int total = sum;
            for(int i=0; i<n; i++){
                total -= arr[i];
                if(total % k){
                    minimum = max(minimum, n-i-1);
                    break;
                }
            }
            total = sum;
            for(int i = n-1; i>=0; i--){
                total -= arr[i];
                if(total % k){
                    minimum = max(minimum, i);
                    break;
                }
            }
            cout << minimum << "\n";
        }
    }
    return 0;
}
