#include <iostream>
using namespace std;

int main(){

    int n;
    cout<< "Enter a number: ";
    cin>> n;
    for(int i = 0; i<=n; i++){
        for(int j=i; j<=n;j++){
            cout<<" ";
        }
        for(int j=1; j<i;j++){
            cout<<"*";
        }
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
    cout<< "\n";
    }

    return 0;

}
