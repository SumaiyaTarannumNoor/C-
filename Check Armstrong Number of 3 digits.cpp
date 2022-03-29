#include <iostream>
using namespace std;

int main() {
int num, originalNum, remainder, result = 0;
cout<< "Enter a three-digit number: ";
cin>> num;
originalNum= num;

while (originalNum != 0){
    //remainder contains the last digit
    remainder = originalNum %10 ;

    result += remainder * remainder * remainder;

    //removing last digit from original number
    originalNum /= 10;

}
    if(result==num)
        cout<< num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong Number.";

    return 0;

}
