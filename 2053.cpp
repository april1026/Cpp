#include <iostream>
#include <vector>

using namespace std;

int main() {
	long long int x1, x2, a, b, n;
	cin >> x1 >> x2 >> a >> b >> n;
	
	int ans[3] = {x1, x2}, index = 2;
	for (int i = 3; i <= n ; i++) {
		ans[index%3] = ((b * ans[(index-1)%3]) % 1000000007);
		ans[index%3] %= 1000000007;
		ans[index%3] += ((a * ans[(index-2)%3]) % 1000000007);
		ans[index%3] %= 1000000007;
//		cout << ans[index%3] << " ";
		index++;
	}
	
	cout << ans[(index-1)%3];
}
