#include <bits/stdc++.h>

#define ll   long long

using namespace std;

int main(){

    int t=1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <ll int> a(n);
        for(auto &e: a) cin >> e;

        sort(a.begin(), a.end());

        ll int total = accumulate(a.begin(), a.end(), 0ll);
        ll int answer = total;
        ll int sum = 0;
        ll int cnt = n;

        for(auto e: a){
             sum += e;
             total -= e;
             cnt --;

             if(total <= sum){
                if(total < sum){

                ll int num = sum - total;
                num /= 2;

                if(num){
                    cnt++ ;
                    total += num;
                    sum -= num;

                    }
                }


             answer = sum + cnt;
             break;
         }
        }

        cout << answer << "\n";

    }


}
