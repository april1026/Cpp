#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int num[n];
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if ((j - i) == (num[i] - num[j]) || (j - i) == (num[j] - num[i])) {
				ans++;
			}
		}
	}
	ans *= 2;
	cout << ans;
}
