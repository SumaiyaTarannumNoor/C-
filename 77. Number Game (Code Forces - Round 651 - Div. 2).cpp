#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s1 = "Asishgup";
        string s2 = "FastestFinger";
        if (n==1){
            cout << s2 << "\n";
        }
        else if (n==2){
            cout << s1 << "\n";
        }
        else if (n>2 && n%2==1){
            cout << s1 << "\n";
        }
        else{
            //if its 2^x with no odd factor
            if((int) (n& (n-1))==0)
                cout << s2 << "\n";
            else if(n%4 == 0)
                cout << s1 << "\n";
            else if(isPrime (n/2))
                cout << s2 << "\n";
            else
                cout << s1 << "\n";
        }
    }
}
