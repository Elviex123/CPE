#include <bits/stdc++.h>
using namespace std;

const int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {

	int n, m;
	int id = 1;
	while(cin >> n >> m && (n && m)) {
		vector<string> grid(n);
		for(int i = 0; i < n; i++) {
			cin >> grid[i];
		}
		vector<vector<int>> ans(n, vector<int>(m));
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				if(grid[i][j] == '.') {
					int cnt = 0;
					for(int dir = 0; dir < 8; dir++) {
						int ni = i + dx[dir];
						int nj = j + dy[dir];
						if(ni >= 0 && ni < n && nj >= 0 && nj < m && grid[ni][nj] == '*') {
							cnt++;
						}
					}
					ans[i][j] = cnt;
				}
			}
		}
		cout << "Field #" << id++ << ":\n";
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				if(grid[i][j] == '*') {
					cout << "*";
				} else {
					cout << ans[i][j];
				}
			}
			cout << "\n";
		}
		cout << "\n";
	}
	return 0;
}
