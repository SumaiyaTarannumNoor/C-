#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>arr[2];
        for(int i=0; i<2*n; i++)
        {
            int x;
            cin >> x;
            if(x & 1)
                arr[1].push_back(i+1);
            else
                arr[0].push_back(i+1);
        }
        if((int) arr[1].size() % 2 ==1){
            arr[1].pop_back();
            arr[0].pop_back();
        }
        else if((int) arr[0].size() >= 2){
            arr[0].pop_back();
            arr[0].pop_back();
        }
        else{
            arr[1].pop_back();
            arr[1].pop_back();
        }
        for(int i=0; i<arr[0].size(); i+= 2)
            cout << arr[0][i] << " " << arr[0][i+1] << "\n";
        for(int i=0; i<arr[1].size(); i+=2)
            cout << arr[1][i] << " " << arr[1][i+1] << "\n";
    }
    return 0;
}
