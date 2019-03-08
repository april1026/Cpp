#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double a1, a2, b1, b2;
	cin >> a1 >> a2 >> b1 >> b2;
	cout << fixed << setprecision(2) << double(-(b1 - b2) / (a1 - a2)) << "\n";
	cout << a1 * (double(-(b1 - b2) / (a1 - a2))) + b1;
}
