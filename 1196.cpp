#include <iostream>
#include <algorithm>

using namespace std;

int n;
char map[10][11];

int walk(int x, int y) {
	if (map[x-1][y-1] == 'A') {
		return map[x-1][y-1] - 'A' + max(walk(x+1, y), walk(x, y+1));
	}else if (map[x-1][y-1] == 'X') {
		return -1000000;
	} else if (x == n && y == n) {
		return 0;
	} else if (x == n) {
		return map[x-1][y-1] - '0' + walk(x, y+1);
	} else if (y == n) {
		return map[x-1][y-1] - '0' + walk(x+1, y);
	} else {
		return map[x-1][y-1] - '0' + max(walk(x+1, y), walk(x, y+1));
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> map[i];
	}
	
	int ans = walk(1, 1);
	if (ans < 0) {
		cout << 'X';
	} else {
		cout << ans;
	}
	
	return 0;
}
