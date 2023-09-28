#include <iostream>
using namespace std;
int main() {
    long long n; 
    cout << "Enter a number: ";
    cin >> n;
     
  int digitCount = 0;
    long long temp = n; 
    while (temp != 0) {
        digitCount++;
        temp /= 10;
    }
  cout << "Number of digits: " << digitCount << endl;
    return 0;
}
