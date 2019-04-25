#include <iostream>

using namespace std;

int ans;
int a(int now) {
	ans++;
	if (now % 2 == 0) {
		return a(now/2);
	} else if (now == 1) {
		return 1;
	} else if (now % 2 == 1) {
		return a(now*3+1);
	}
}

int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
	
	int input;
	while(cin >> input) {
		ans = 0;
		a(input);
		cout << ans-1 << '\n';
	}
} 
