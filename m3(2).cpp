#include <iostream>
#include <map>
#include <stack>

using namespace std;

int main() {
	int n;
	cin >> n;
	int p[n], m[n];
	map <int, int> map_m;
	map <int, int> map_p;
	stack <int> stack_m;
	stack <int> stack_p;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		int m = temp - i, p = temp + i;
//		cout << "m " << m << " p " << p << endl;
		if (map_m[m] == 0) {
			stack_m.push(m);
		}
		map_m[m]++;
		if (map_p[p] == 0) {
			stack_p.push(p);
		}
		map_p[p]++;
	}
	
	int ans = 0;
	for (int i = 0; stack_m.size(); i++) {
		int temp = map_m[stack_m.top()];
//		cout << "M " << stack_m.top() << " " << temp << endl;
		stack_m.pop();
		ans += (temp * (temp-1));
	}
	for (int i = 0; stack_p.size(); i++) {
		int temp = map_p[stack_p.top()];
//		cout << "P " << stack_p.top() << " " << temp << endl;
		stack_p.pop();
		ans += (temp * (temp-1));
	}
	
	cout << ans;
} 
