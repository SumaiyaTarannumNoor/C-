#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int>a(n+1);
    vector<int>b(n+1);
    vector<pair<int, int>>arr(n+1);
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        a[i+1] = num;
        arr[i+1].first = num;
        arr[i+1].second = i+1;
    }

    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        b[i+1] = num;
    }

    sort(arr.begin(), arr.end());
    unordered_map<int, int>mp;
    int maxi = -1;
    int rotation;

    for(int i=1; i<=n; i++){
        int x = arr[b[i]].second;
        int y = i;
        if(x>=y){
            mp[x-y]++;
            if(mp[x-y]>maxi)
                maxi = mp[x-y], rotation=x-y;
        }
        else{
            mp[x-y+n]++;
            if(mp[x-y+n]>maxi)
                maxi = mp[x-y+n], rotation = x-y+n;
        }
    }

    vector<int>answer(n);
    for(int i=0; i<n; i++)
        answer[(i+rotation)%n] = b[i+1];
    int match = 0;
    for(int i=0; i<n; i++){
        if(answer[i]==a[i+1])
            match++;
    }
    cout << match;

}
