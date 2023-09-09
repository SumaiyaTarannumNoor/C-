#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b;
    while(cin >> a >> b)
    {
    cout << a << " " << b << " ";

    if(a>b) swap(a,b);

    int max_cycle_len =  INT_MIN;

    for(int number=a; number <= b; number++){
            int n = number;
            int cycle_len = 1;
            while(n != 1){
                if(n%2==1) n = (3*n)+1;
                else n = n/2;
                cycle_len++;
            }
            max_cycle_len = max(max_cycle_len, cycle_len);
        }
        cout << max_cycle_len<<endl;
      }
      return 0;
    }



