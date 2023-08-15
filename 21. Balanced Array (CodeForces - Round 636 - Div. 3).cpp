#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        int sum =0;
        for(int i=0; i< (n/2); i++){
            a[i] = 2 * (i+1);
            sum += a[i];
        }

        int k =0;
        int flag = 0;
        for(int i=(n/2); i<n; i++){
            if(i == n-1){
                if(sum%2 != 0){
                    a[i] = sum;
                    flag = 1;
                }
            }
            a[i] = (2*k) + 1;
            k++;
            sum -= a[i];

        }
        if(flag == 0)
            cout << "NO" << "\n";
        else{
            cout << "YES" << "\n";
            for (int i=0; i<n; i++)
                cout << a[i] << " ";
            cout<<"\n";
            }

        }
        return 0;
    }


