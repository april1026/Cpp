#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int w = 1;
	for (int i = 0; i < M; i++)
		w *= 2;
	
	long int dp[w+1] = {};
	for (int i = 0; i < N; i++) {
		long int a, b;
		cin >> a >> b;
		int aa = 1;
		for (int j = 0; j < a; j++)
			aa *= 2;
		for (int j = w; j >= aa; j--) {
			dp[j] = max(dp[j], dp[j-aa]+b);
		}
//		for (int j = 1; j <= w; j++)
//			cout << dp[j] << " ";
//		cout << "\n";
	}
	
	long int ans = 0;
	for (int i = 1; i <= w; i++) {
//		cout << dp[i] << " ";
		ans = max(ans, dp[i]);
	}
	
	cout << ans;
} 
