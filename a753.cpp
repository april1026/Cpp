#include <iostream>
#include <algorithm>

using namespace std;

int map[30][30] = {};
int a, b;
int dfs(int num, int x, int y) {
	if (map[x][y] == 0 || map[x][y] != num || x < 0 || x >= a || y < 0 || y >= b) {
		return 0;
	}
//	cout << "\n" << num << " " << x << " " << y << "\n";
	map[x][y] = 0;
	return (dfs(num, x-1, y) + dfs(num, x+1, y) + dfs(num, x, y-1) + dfs(num, x, y+1) + 1);
}

int main() {
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> map[i][j];
		}
	}
	
	int n[9] = {};
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < a; j++) {
			for (int k = 0; k < b; k++) {
				if (map[j][k] == (i+1))
					n[i] = max(n[i], dfs(i+1, j, k));
			}
		}
	}
	
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int num;
		cin >> num;
		if (n[num-1] < 2) {
			cout << "0\n";
		}else {
			cout << n[num-1] << "\n";
		}
	}
	
} 
