#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	string names[n];
	for (int i = 0; i < n; i++) {
		cin >> names[i];
	}
	
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		string input;
		cin >> input;
		for (int j = 0; j <= n; j++) {
			if (j == n) {
				cout << "No\n";
				break;
			}
			if (input == names[j]) {
				cout << "Yes\n";
				break;
			}
		}
	}
	
	return 0;
}
