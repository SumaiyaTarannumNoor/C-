#include <bits/stdc++.h>

using namespace std;

#define vint vector<int>

int interact(vint S){

    cout << "? " << S.size() << ' ';
    for(int i: S)
        cout << i << ' ';
    cout << endl;
    int x;
    cin >> x;
    return x;
}

vint get_complement(vint v, int n){

    vint check, occur(n+1);
    for(int i: v)
        occur[i] =1;
    for(int i=1; i<=n; i++)
        if(!occur[i])
            check.push_back(i);
    return check;
}

void solve(){
    int n, k;
        cin >> n >> k;
        vector<vint>S(k);
        vint ans(k);
        for(int i=0; i<k; i++){
            int c;
            cin >> c;
            S[i].resize(c);
            for(int j=0; j<c; j++)
                cin >> S[i][j];
        }
        vint check;
        for(int i=1; i<=n; i++)
            check.push_back(i);
        int max_element = interact(check);
        int starting = 0, ending = k-1;
        while(starting < ending){
            int middle = (starting + ending) / 2;
            check.clear();
            for(int i=0; i<=middle; i++)
                for(int j: S[i])
                    check.push_back(j);
            int x = interact(check);
            if(x == max_element)
                ending = middle;
            else starting = middle + 1;
        }

        check = get_complement(S[starting], n);
        for(int i=0; i<k; i++)
            if(i == starting)
                ans[i] = interact(check);
            else ans[i] = max_element;
        cout << "! ";
        for(int i : ans)
                cout << i << ' ';
         cout << endl;
         string correct;
         cin >> correct;
}

int main() {

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
