#include <bits/stdc++.h>

using namespace std;

void solve(){
    int k,n,m;
    cin>>k>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    int x=0,y=0;
    vector<int>ans;
    while(x<n || y<m){
        if(x<n && y<m){
            if(a[x]==0) ans.push_back(0), x++, k++;
            else if(b[y]==0) ans.push_back(0), y++, k++;
            else{
                if(a[x]<b[y] && a[x]<=k) ans.push_back(a[x]), x++;
                else if(a[x]>=b[y] && b[y]<=k) ans.push_back(b[y]), y++;
                else{
                    cout<<-1<<"\n";
                    return;
                }
            }
        }
        else if(x<n){
            if(a[x]==0) ans.push_back(0), x++, k++;
            else{
                if(a[x]<=k) ans.push_back(a[x]), x++;
                else{
                    cout<<-1<<"\n";
                    return;
                }
            }
        }
        else if(y<m){
            if(b[y]==0) ans.push_back(0), y++, k++;
            else{
                if(b[y]<=k) ans.push_back(b[y]), y++;
                else{
                    cout<<-1<<"\n";
                    return;
                }
            }
        }
    }
    for(auto x : ans) cout<<x<<" ";
        cout<<"\n";
    }




int main(){
int t;
cin>>t;
for(int i=1;i<=t;i++){
    solve();
}
return 0;
}
