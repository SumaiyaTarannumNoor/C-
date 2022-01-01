#include <iostream>
using namespace std;

int main() {
 int number;

 cout <<"Enter an integer: ";
 cin >> number;

 if(number > 0){
    cout << "You entered a positive number: "<< number <<endl;

 }
 else if(number < 0){
    cout << "You entered a negative number: "<< number<< endl;
 }
 else {
    cout << "You entered 0"<<endl;
 }
 cout << "This line is always printed.";
}
