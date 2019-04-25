#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	string input;
	cin >> input;
	stack <int> caculate;
	for (int i = 0; i < input.size(); i++) {
		char temp = input[i];
		if (temp >= '0' && temp <= '9') {
			caculate.push(temp-'0');
			continue;
		}
		int a, b;
		a = caculate.top();
		caculate.pop();
		b = caculate.top();
		caculate.pop();
		switch (temp) {
			case '+':
				caculate.push(a+b);
				break;
			case '-':
				caculate.push(a-b);
				break;
			case '*':
				caculate.push(a*b);
				break;
			case '/':
				caculate.push(a/b);
				break;
		}
	}
	cout << caculate.top();
}
