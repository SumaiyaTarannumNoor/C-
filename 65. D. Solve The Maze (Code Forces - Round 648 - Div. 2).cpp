#include <bits/stdc++.h>

using namespace std;

int n, m;
bool isValid(int i, int j){
    return (i>=0 && i<n && j>=0 && j<m);
}

void solve(){
    cin >> n >> m;
    char arr[n][m];
    int good = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
            if(arr[i][j]=='G')
                good++;
        }
    }
    if(good==0){
        cout << "Yes" << "\n";
        return;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]=='B'){
                if(isValid(i+1, j) && arr[i+1][j]=='.')
                    arr[i+1][j]='#';
                if(isValid(i-1, j) && arr[i-1][j]=='.')
                    arr[i-1][j]='#';
                if(isValid(i, j+1) && arr[i][j+1]=='.')
                    arr[i][j+1]='#';
                if(isValid(i, j-1) && arr[i][j-1]=='.')
                    arr[i][j-1]='#';

            }
        }
    }
    if(arr[n-1][m-1]=='#'){
        cout << "No" << "\n";
        return;
    }

    queue<pair<int, int>> Q;
    bool visited[n][m];
    memset(visited, false, sizeof(visited));
    Q.push({n-1, m-1});
    visited[n-1][m-1]= true;
    while(!Q.empty()){
        pair<int, int> curr = Q.front();
        Q.pop();
        int i = curr.first;
        int j = curr.second;
        if(isValid(i+1, j) && !visited[i+1][j] && arr[i+1][j] != '#'){
            Q.push({i+1,j});
            visited[i+1][j]=true;
        }
        if(isValid(i-1, j) && !visited[i-1][j] && arr[i-1][j] != '#'){
            Q.push({i-1,j});
            visited[i-1][j]=true;
        }
        if(isValid(i, j+1) && !visited[i][j+1] && arr[i][j+1] != '#'){
            Q.push({i,j+1});
            visited[i][j+1]=true;
        }
        if(isValid(i, j-1) && !visited[i][j-1] && arr[i][j-1] != '#'){
            Q.push({i,j-1});
            visited[i][j-1]=true;
        }
    }

    bool answer = true;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if((arr[i][j]=='G' && !visited[i][j]) || (arr[i][j]=='B' && visited[i][j])){
                answer = false;
                break;
            }
        }
    }
    cout << (answer ? "Yes" : "No") << "\n";

}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
