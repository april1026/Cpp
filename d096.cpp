#include <iostream>
#include <string>

using namespace std;

int main() {
	long long int n;
	while(cin >> n) {
		long long int ans = (1+n)*(1+n)/2-1;
		cout << ans+(ans-2)+(ans-4) << "\n";
	}
}
