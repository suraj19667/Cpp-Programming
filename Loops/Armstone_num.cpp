#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int number, num2, remainder, ans = 0;
    int digit = 0;

    cout << "Enter a number: ";
    cin >> number;

    num2 = number;
    int num3 = number;
    while (num3 > 0) {
        num3=num3/10;
        digit++;
    }

    num3 = number;
    while (num3 > 0) {
        remainder = num3 % 10; 
        ans= ans + pow(remainder, digit); 
        num3 /= 10; 
    }

    if (ans == num2) {
        cout <<"Armstrong number." << endl;
    } else {
        cout <<"not Armstrong number." << endl;
    }

    return 0;
}
