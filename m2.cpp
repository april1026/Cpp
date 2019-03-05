#include <iostream>

using namespace std;

int main() {
	int n, x, y, k;
	cin >> n >> x >> y >> k;
	int d = 2;
	// 0¤W 1¥k 2¤U 3¥ª 
	for (int i = 0; i < k; i++) {
//		cout << "(" << x << ", " << y << ")" << "\n";
//		cout << d << '\n';
		char input;
		int t;
		cin >> input >> t;
		switch(input) {
			case 'W':
				switch(d) {
					case 0:
						y -= t;
						break;
					case 1:
						x += t;
						break;
					case 2:
						y += t;
						break;
					case 3:
						x -= t;
						break;
				}
				if (x < 0) {
					x = 0;
				} else if (y < 0){
					y = 0;
				} else if (x > n) {
					x = n;
				} else if (y > n) {
					y = n;
				}
				break;
			case 'L':
				d -= t;
				while(d < 0) {
					d += 4;
				}
				break;
			case 'R':
				d += t;
				while(d >= 4) {
					d -= 4;
				}
				break;
		}
	}
	cout << "(" << x << ", " << y << ")";
}
