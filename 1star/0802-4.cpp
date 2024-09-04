#include <iostream>
using namespace std;

int main() {
    int n, l, i, k, t, tr[100], count;
    cin >> n;
    while (n--) {
        for (i = 0; i < 100; i++)
            tr[i] = 0;
        count = 0;
        cin >> l;
        for (i = 0; i < l; i++)
            cin >> tr[i];
        for (i = 0; i < l - 1; i++)
            for (k = 0; k < l - 1; k++)
                if (tr[k] > tr[k + 1]) 
				{
                    t = tr[k];
                    tr[k] = tr[k + 1];
                    tr[k + 1] = t;
                    count++;
                }
        cout << "Optimal train swapping takes " << count << " swaps." << endl;
    }
    return 0;
}

