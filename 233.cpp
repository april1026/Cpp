#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	bool input_case = 1;
	if (s.find(" ", 0) == s.npos) {
		input_case = 0;
	}
	
	if (input_case) {
		long long int x = 0, y = 0;
		long long int a = 1;
		for (int i = (s.find(" ", 0) - 1); i >= 0; i--) {
			x += ((s[i] - '0') * a);
			a *= 10;
		}
		a = 1;
		for (int i = (s.size()-1); i > s.find(" ", 0); i--) {
			y += ((s[i] - '0') * a);
			a *= 10;
		}
		
		long long int ans = 0;
		for (int i = 1; i < x; i++) {
			ans += i;
		}
		ans += y;
		
		cout << ans;
		
		return 0;
	} else {
		long long int input = 0;
		long long int a = 1;
		for (int i = (s.size()-1); i >= 0; i--) {
			input += ((s[i] - '0') * a);
			a *= 10;
//			cout << i << " " << input << endl;
		}
		
		a = 1;
		while(input > a) {
			input -= a;
			a++;
		}
		
		cout << "(" << a << "," << input << ")";
		
		return 0; 
	}
}
