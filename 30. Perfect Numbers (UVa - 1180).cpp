#include <bits/stdc++.h>
using namespace std;

long long int isprime(long long int n){

    if(n==1) return 0;
    else if(n==2) return 1;
    else if(n%2==0) return 0;
    else{
        for(int i = 3; i<= sqrt(n); i += 1){
            if(n%i==0) return 0;
        }
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    for(int i=1; i <= t; i++){
        long long int n;
        scanf("%lld,",&n);

        long long int j = pow((double)2,n)-1;
        if(isprime(n) && isprime(j)){
            cout << "Yes\n";
        }
        else
            cout << "No\n";
    }

    return 0;
}
