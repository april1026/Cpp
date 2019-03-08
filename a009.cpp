#include <iostream>
#include <string>

using namespace std;

int main() {
	string a;
	while(cin >> a) {
		bool yes = 1;
		for (int i = 0; i < a.size()/2; i++) {
			if (a[i] != a[a.size()-1-i]) {
				yes = 0;
			}
		}
		if (yes) {
			cout << "yes\n";
		} else {
			cout << "no\n";
		}
	}
}
