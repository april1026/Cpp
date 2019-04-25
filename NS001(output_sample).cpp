#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	
	stack <int> box;
	queue <int> output;
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
				output.push(box.top());
				box.pop();
			}
		}
	}
	
	int output_size = output.size();
	for (int i = 0; i < output_size; i++) {
		cout << output.front() << " ";
		output.pop();
	}
	
	return 0;
} 
