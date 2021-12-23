#include <iostream>
using namespace std;

int main(){
int n, reverseNumber = 0, remainder;

cout<< "Enter an integer: ";
cin>>n;

while(n!=0){
    remainder + n%10;
    reversedNumber = reverseNumber*10 + remainder;
    reverseNumber /= 10;
}
    cout << "Reverse Number = " << reverseNumber;

    return 0;
}
