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
		int times;
		cin >> d >> times;
		if (d == 'a') {
			while(times--) {
				box.push(now_book);
				now_book++;
			}
		} else if (d == 'b') {
			while(times--) {
				cout << box.top() << " ";
				box.pop();
			}
		}
	}
	
	return 0;
} 
