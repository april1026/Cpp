#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int m;
	cin >> m;
	while(m--) {
		int a, b, c;
		cin >> a >> b >> c;
		int temp = sqrt((b * b) - (4 * a * c));
		if ((b * b) - (4 * a * c) == temp * temp) {
			cout << "Yes";
		} else {
			cout << "No";
		}
		cout << "\n";
	}
}
