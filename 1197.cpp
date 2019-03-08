#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int n;
	string s;
	cin >> n >> s;
	string check = s;
	sort(s.begin(), s.end());
	int ans = 0;
	while(check != s) {
		next_permutation(s.begin(), s.end());
		ans++;
		ans %= n;
	}
	cout << ans;
}
