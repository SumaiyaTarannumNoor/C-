#include <bits/stdc++.h>
using namespace std;

void solve(){
     string s;
        cin >> s;
        deque<char>dq;
        char maxi = 'a';
        for(int i=0; i<(int)s.size(); i++){
            maxi = max(maxi, s[i]);
            dq.push_back(s[i]);
        }

        for(char ch = maxi; ch>= 'a' ; ch--){
              if(dq.front()== ch) dq.pop_front();
              else if(dq.back() == ch) dq.pop_back();
              else{
                cout << "NO" <<endl;
                return;
              }

        }

        if(dq.size()==0) cout<< "YES" << endl;

        else cout << "NO" << endl;


}

int main(){

    int t;
    cin>> t;
    for(int i=1; i<=t; i++){
            solve();
    }
    return 0;
}
