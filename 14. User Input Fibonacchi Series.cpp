#include <iostream>
using namespace std;
int main(){
    int first = 0, second = 1, n;
    cout << "Enter how many fibonacchi number you would like to see: ";
    cin >> n;
    cout << "The fibonacchi series is : \n";
    for (int i=0; i<n; i++){
        cout << second << " ";
        int third = first + second;
        first = second;
        second = third;
    }
    return 0;
}
