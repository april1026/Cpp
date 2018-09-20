#include <iostream>
#include <math.h>
using namespace std;
int pluss(int);
int main() {
	int num;
	cin >> num;
	int ans = pluss(num);
	cout << ans;
}
int pluss(int x) {
	if ((x / 10) == 0)
		return x;
	else {
		int y = (x % 10);
		return pluss(x / 10) + y;
	}
}
