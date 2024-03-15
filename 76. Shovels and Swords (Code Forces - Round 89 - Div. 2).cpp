#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;
        if(2*a<=b)
            cout << a << "\n";
        else if(2*b <= a)
            cout << b << "\n";
        else
            cout << (a+b)/3 << "\n";
    }
    return 0;
}
