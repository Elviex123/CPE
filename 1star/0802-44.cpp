#include <algorithm>
#include <iostream>
using namespace std;

struct Num {
    int n;  // ?值
    int r;  // 余?
    bool odd;  // 是否是奇?
};

// 自定?比?函?
bool comp(const Num& a, const Num& b) {
    // 首先按余?排序，余?小的排前面
    if (a.r != b.r) return a.r < b.r;

    // 如果余?相同，按照 odd 值排序，奇?排在前面
    if (a.odd != b.odd) return a.odd;

    // 如果 odd 值也相同，按?值升序排序
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
