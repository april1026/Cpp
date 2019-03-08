#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b) {
		while (a != 0 && b != 0) {
//			cout << a << " " << b << endl;
			if (a > b)
				a = a-b;
			else 
				b = b-a;
		}
		if (a == 0)
			cout << b << "\n";
		else
			cout << a << "\n";
	}
}
