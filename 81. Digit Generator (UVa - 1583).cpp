#include <bits/stdc++.h>

using namespace std;

int res[100000] = {0};
int main()
{

     for(int i=1; i<=100000; i++){
            int num = i + (i/10000) + (i/1000)%10 + (i/100)%10 + (i/10)%10 + i%10;
            if(res[num]==0 || i<res[num])
                res[num] = i;
    }
    int t;
    cin >> t;
    while (t--){
        int num;
        cin >> num;
        cout << res[num] << "\n";
        }

    return 0;
}
