#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string input;
	while(cin >> input) {
		int num = 0;
		for (int i = 0; i < input.size(); i++) {
			if (input[i] >= 'A' && input[i] <= 'Z')
				num += input[i] - 'A' + 27;
			else
				num += input[i] - 'a' + 1;
		}
//		cout << num << endl;
		bool yes = 1;
		for (int i = 2; i < num; i++) {
			if (num%i == 0) {
				cout << "It is not a prime word.\n";
				yes = 0;
				break;
			}
		}
		if (yes)
			cout << "It is a prime word.\n";
	}
}
