#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	int h[n];
	for (int i = 0; i < n; i++) {
		cin >> h[i];
	}
 	for (int i = 0; i < n; i++) {
		int ans = 1000002;
		int xi, xj;
		cin >> xi >> xj;
		for (int j = xi-1; j < xj; j++) {
			ans = min(ans, h[j]);
		}
		cout << ans + 1 << "\n";
	}
	
	return 0;
}
