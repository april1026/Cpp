#include <iostream>
using namespace std;

void dfs(int, int);
int n, m;
char map[100][101];

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> map[i];
	}
	
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] == 'W') {
				dfs(i, j);
				ans++;
			}
		}
	}
	
	cout << ans;
	
	return 0;
}

void dfs(int y, int x) {
	map[y][x] = '*';
	
	for (int i = -1; i <= 1; i++) {
		for (int j = -1; j<= 1; j++) {
			int ny = y + i;
			int nx = x + j;
			
			if (ny >= 0 && ny < n && nx >= 0 && nx < m && map[ny][nx] == 'W') {
				dfs(ny, nx);
			}
		}
	}
	
	return;
}
