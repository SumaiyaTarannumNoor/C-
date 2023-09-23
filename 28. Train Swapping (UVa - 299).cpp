#include <bits/stdc++.h>

using namespace std;

int main(){

int n;

cin >> n;
while(n--){
    int l;
    int s = 0;
    int arr[50];
    while(cin >> l){
    if(0 <= l && l <= 50){
        for(int k=0; k<l; k++) cin >> arr[k];
        for(int i=0; i<l; i++){
            for(int j=i+1; j<l; j++){
                if(arr[i]>arr[j]){
                    swap(arr[i], arr[j]);
                    s++;

                }
            }
    }
    cout << "Optimal train swapping takes " << s << " swaps."<< endl;
    s=0;

    }

    }


}

return 0;
}
