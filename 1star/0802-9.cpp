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
            carry += a % 10 + b % 10; // 計算當前位數的和，加上之前的進位
            if (carry >= 10) {
                carry /= 10; // 如果有進位，則進位變為1
                count++; // 計數進位次數
            } else {
                carry = 0; // 如果沒有進位，則進位為0
            }
            a /= 10; // 移到下一位
            b /= 10; // 移到下一位
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

