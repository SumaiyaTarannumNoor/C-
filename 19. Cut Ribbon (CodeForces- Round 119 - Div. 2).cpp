#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b, c;
    cin>>n>>a>>b>>c;
    int ans = 0;
    for (int x=0; x<=4000; x++){
        for (int y=0; y<=4000; y++){
            int zc = n - (x*a + y*b);
            if (zc<0)
                break;
            int z = (zc/(int)c);
            if (z ==(int)z)
                if(x==y)
                ans = max(ans,  y + z);
        }

    }
    cout<<ans;
    return 0;
}
