#include <algorithm>
#include <iostream>
using namespace std;

struct Num {
    int n;  
    int r;  
    bool odd;  
};

bool comp(const Num& a, const Num& b) {

    if (a.r != b.r) return a.r < b.r;


    if (a.odd != b.odd) return a.odd;


    return a.n < b.n;
}

int main() {
    int n, m, t;
    Num a[10000];
    
    while (cin >> n >> m && !(n == 0 && m == 0)) {
        cout << n << " " << m << endl;
        for (int i = 0; i < n; i++) {
            cin >> t;
            a[i].n = t;
            a[i].r = t % m;  
            a[i].odd = (t % 2 != 0);  
        }

        sort(a, a + n, comp);  

        for (int i = 0; i < n; i++) {
            cout << a[i].n << endl;
        }
    }
    
    cout << "0 0" << endl;  
    
    return 0;
}
