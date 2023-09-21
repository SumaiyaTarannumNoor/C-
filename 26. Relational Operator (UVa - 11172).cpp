#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    if(t<15){
    while(t--){
        int a, b;
        while(cin >> a >> b){
            if(a > b){
                cout << ">" << endl;
            }
            else if(a < b){
                 cout << "<" << endl;
            }
            else if(a == b){
                cout << "=" << endl;
            }
            break;
        }
    }
    }

    return 0;
}

