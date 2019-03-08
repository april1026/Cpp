#include <iostream>
#include <algorithm>

using namespace std;


int main() {
	int map[100][100] = {};
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0 ; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> map[i][j];
			if (i == 0) {
				continue;
			} else if (j == 0) {
				map[i][j] += map[i-1][j];
			} else {
				map[i][j] += max(map[i-1][j], map[i-1][j-1]); 
			}
			if (i == (n-1)) {
				ans = max(ans, map[i][j]);
			}
		}
	}
	
	cout << ans;
} 
