#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		int a, k;
		cin >> a >> k;
		for (int i = 1; i < k; i++) {
//			cout << i << " " << a << "\n";
			a = (a%100000/10000 + a%10000/1000 + a%1000/100 + a%100/10 + a%10 + a); 
		}
		cout << a << "\n";
	}
}
