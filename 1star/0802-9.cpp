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
            carry += a % 10 + b % 10; // �p���e��ƪ��M�A�[�W���e���i��
            if (carry >= 10) {
                carry /= 10; // �p�G���i��A�h�i���ܬ�1
                count++; // �p�ƶi�즸��
            } else {
                carry = 0; // �p�G�S���i��A�h�i�쬰0
            }
            a /= 10; // ����U�@��
            b /= 10; // ����U�@��
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

