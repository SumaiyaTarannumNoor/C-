#include <bits/stdc++.h>

using namespace std;

int main(){

int t;
cin >> t;

for(int i=0; i<t;i++){
    string s;
    int a;
    float weight;
    cin >> a >> s;
    if(1<= a <= 10){
        weight = a*0.5;
        if(s.size()>= 4 && s[3] != ' '){
            weight += (s[3]-'0') * 0.05;
        }
        cout << "Case " << i+1 <<": " << weight<< endl;
    }

}

return 0;
}
