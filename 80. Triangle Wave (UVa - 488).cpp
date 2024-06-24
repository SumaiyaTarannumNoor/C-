#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin >> t;

     for(int a=0; a<t; a++){
        int amp , freq;
        cin >> amp >> freq;

        for(int i =0; i<freq; i++){
            for(int j=1; j<=amp; j++){
                for(int k=1; k<=j; k++){
                    cout << j;
                }
                cout << "\n";
            }
            for(int j=amp-1; j>=1; j--){
                for(int k=1; k<=j; k++){
                    cout << j;
                }
                cout << "\n";
            }

            if(i + 1 == freq && a+1==t){

            }
            else
                cout << "\n";
        }
    }
    return 0;
}
