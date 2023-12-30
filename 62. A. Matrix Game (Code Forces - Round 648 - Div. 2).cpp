#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        memset(arr, 0, sizeof(arr));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int k;
                cin >> k;
                if(k==1){
                    for(int x=0; x<m; x++) arr[i][x] = 1;
                    for(int x=0; x<n; x++) arr[x][j] = 1;
                }
            }
        }

        int turn = 0;
        int flag = 0;
        while(true){
            flag = 0;
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    if(arr[i][j]==0){
                        turn ++;
                        flag = 1;
                        for(int x=0; x<m; x++) arr[i][x] = 1;
                        for(int x=0; x<n; x++) arr[x][j] =1;
                        break;
                    }
                }
                if(flag == 1) break;
            }
            if(flag == 0) break;
        }
        if(turn % 2 == 0) cout << "Vivek" << "\n";
        else cout << "Ashish" << "\n";


    }
    return 0;
}


