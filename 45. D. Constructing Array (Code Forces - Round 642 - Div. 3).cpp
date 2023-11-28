#include <bits/stdc++.h>

using namespace std;

struct cmp{

    bool operator() (const pair<int, int>& a, const pair<int, int>& b){

        int len1 = a.second - a.first+1;
        int len2 = b.second - b.first+1;
        if(len1 = len2)
            return a.first < b.first;
        return len1>len2;

    }


};

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n == 1){
            cout << 1 << "\n";
            continue;
        }
        vector<int> a(n);
        set<pair<int, int>, cmp>s;
        s.insert({0, n-1});
        for(int i=1; i<=n; i++){
            auto current = *s.begin();
            s.erase(s.begin());
            int mid = (current.first + current.second)/2;
            a[mid] = i;
            if(current.first<mid) s.insert({current.first, mid-1});
            if(current.second>mid) s.insert({mid+1, current.second});
        }

        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
        }

     return 0;
}


