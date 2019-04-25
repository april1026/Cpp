#include <iostream>
#include <stack>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	
	stack <int> box;
	int now_book = 1;
	while (m--) {
		char d;
		int t;
		cin >> d >> t;
		if (d == 'a') {
			while(t-- && now_book <= n) {
				box.push(now_book);
				now_book++;
			}
		} else if (d == 'b') {
			while(t-- && !box.empty()) {
				cout << box.top() << " ";
				box.pop();
			}
		}
	}
	
	return 0;
} 
