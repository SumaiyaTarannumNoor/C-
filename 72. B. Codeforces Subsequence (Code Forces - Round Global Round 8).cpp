#include <bits/stdc++.h>

using ll = long long;

using namespace std;

int main()
{
    vector<ll>arr(10,1);
    ll n;
    cin >> n;
    ll k = 1;
    ll x = 0;
    while(k<n)
    {
        ll ok = arr[x%10];
        k = k/ok;
        arr[x%10]++;
        k = k * arr[x%10];
        x++;
    }
    string str = "codeforces";
    for(int i=0; i<10; i++){
        for(int j=0; j<arr[i]; j++)
            cout << str[i];
    }
    return 0;
}
