#include <bits/stdc++.h>

using ll = long long;

using namespace std;

int main()
{
    int n;
    cin >> n;
    ll total = 0;
    vector<ll>arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        total += arr[i];
    }

    ll mid = total/n;
    int okk = 0;
    for(int i=0; i<n-1; i++){
        if(arr[i] == mid)
            okk++;
        else if(arr[i] > mid){
            arr[i+1] += (arr[i]-mid);
            arr[i] = mid;
            okk++;
        }
        else{
            arr[i+1] -= (mid-arr[i]);
            arr[i] = mid;
            okk++;
        }
    }

    if(arr[n-1] == mid)
        okk++;
    cout << okk;
    return 0;
}
