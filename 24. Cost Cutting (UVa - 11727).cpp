#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
    int a, b, c;
    cin>>a>>b>>c;
        if(a<c && b<a || a<b && a>c){
            cout << "Case "<< i+1 << ": "<< a << endl;
        }
        else if(a<b && b<c || a>c && b>c){
            cout << "Case "<< i+1 << ": "<< b << endl;
        }
        else if(a<c && b>c || a>c && b<c){
            cout << "Case "<< i+1 << ": "<< c << endl;
        }
    }
    return 0;
}
