#include <iostream>
#include <stack>

using namespace std;

int main() {
	int num;
	cin >> num;
	stack <int> caculate;
	for (int i = 0; i < num; i++) {
		char temp;
		cin >> temp;
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
