#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        long long a, k;
        cin >> a >> k;
        bool flag = 1;
        while(--k){
            long long maxi = a % 10;
            long long mini = a % 10;
            long long x = a;
            while(x){
                long long last = x % 10;
                if(last < mini) mini = last;
                if(last > maxi) maxi = last;
                x = x/10;
            }
            if(maxi == 0 || mini == 0){
                cout << a << "\n";
                flag = 0;
                break;
            }
            a = a + (maxi * mini);
        }
        if(flag) cout << a << "\n";
    }
    return 0;
}
