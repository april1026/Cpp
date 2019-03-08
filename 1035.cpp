#include <iostream>
#include <string>

using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	
	int check[2][a.size()] = {};
	bool lines = 0;
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < b.size(); j++) {
			if (j == 0) {
				if (a[j] == b[j]) {
					check[lines][j] = 1;
				}
			} else if (a[j] == b[j]) {
				check[lines][j] = check[lines+1][j-1] + 1;
			}
			lines++;
		}
	}
	
	cout << check[lines+1][a.size()-1];
}
