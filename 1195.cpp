#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;
		if (input[2] == input[3] && input[2] == input[4] && input[2] == input[5]) {
			ans += 2000;
		} else if ((input[2] == input[3] && input[2] == input[4]) || 
					(input[5] == input[3] && input[5] == input[4])) {
			ans += 1000;
		} else if (input[2] == input[3] && input[5] == input[4]) {
			ans += 1500;
		}
	}
	
	cout << ans;
	
	return 0;
}
