#include <iostream>
using namespace std;

int main() {
    long int a, b, carry;
    while (cin >> a >> b) {
        if (a == 0 && b == 0)
            break;

        int count = 0;
        carry = 0;
        while (a != 0 || b != 0) {
            carry += a % 10 + b % 10;
            if (carry >= 10) {
                carry /= 10; 
                count++; 
            } else {
                carry = 0; 
            }
            a /= 10; 
            b /= 10;
        }

        if (count == 0)
            cout << "No carry operation." << endl;
        else if (count == 1)
            cout << "1 carry operation." << endl;
        else
            cout << count << " carry operations." << endl;
    }
    return 0;
}

