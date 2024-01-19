#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    set<int>s;
    bool flag = true;
    vector<int>arr(n);
    for(int i=0; i<2*n; i++){
        s.insert(i);
    }
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]>(i+1)){
            flag = false;
        }
        s.erase(arr[i]);
    }
    if(flag==false){
        cout << -1;

    }
    vector<int>v;
    for(int i=0; i<n; i++){
        v.push_back(*s.begin());
        s.erase(*s.begin());
        if(i+1<n && arr[i] != arr[i+1])
            s.insert(arr[i]);
    }
    for(auto i:v)
        cout << i << " ";
    return 0;
}
