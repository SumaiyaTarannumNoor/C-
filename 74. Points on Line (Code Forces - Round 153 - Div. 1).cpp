#include <bits/stdc++.h>

using ll = long long;

using namespace std;

int main()
{
    ll n, d;
    cin >> n>> d;
    vector<ll>arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];
    ll total = 0;
    for(int i=0; i<n; i++)
    {
        int right = arr[i] + d;
        int index = lower_bound(arr.begin(), arr.end(), right) - arr.begin();
        if(index == n || arr[index] != right)
            index --;
        ll between = index - i -1;
        total += ((between) * (between + 1)) / (2LL);
    }
    cout << total ;
    return 0;
}
