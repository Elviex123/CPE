#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string week[7] = {"Saturday", "Sunday",  "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    int n;
    cin >> n;
    while (n--) {
        int m, d, sum = 0;
        cin >> m >> d;
        for (int i = 0; i < m - 1; i++) {
            sum += month[i];
        }
        cout << week[(sum + d - 1) % 7] << endl;
    }
    return 0;
}
