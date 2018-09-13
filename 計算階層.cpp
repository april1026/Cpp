#include <iostream>
#define MAX 100000
using namespace std;
int main() {
	int all[50];
	int num;
	cin >> num;
	
	for (int i = 0; i < 50; i++) {
		all[i] = 0;
	}
	all[0] = 1;
	
	int plus[49] = {0};
	for (int i = 1; i <= num; i++) {
		for (int j = 0; j < 50; j++) {
			if (all[j] == 0) {
				continue;
			}
			all[j] = all[j] * i;
			if (j != 49 && all[j] > MAX) {
				plus[j] = (all[j] / MAX);
				all[j] = (all[j] % MAX);
			}
		}
		for (int j = 0; j < 49; j++) {
			all[j + 1] = all[j + 1] + plus[j];
			plus[j] = 0;
		}
	}
	
	bool start = false;
	for (int i = 49; i >= 0; i--) {
		if (all[i] != 0 && start == false) {
			cout << all[i];
			start = true;
			continue;
		} else if (all[i] != 0)
			start = true;
		if (start){
			if (all[i] == 0) {
				cout << "00000";
			} else if (all[i] < 10) {
				cout << "0000";
			} else if (all[i] < 100) {
				cout << "000";
			} else if (all[i] < 1000) {
				cout << "00";
			} else if (all[i] < 10000) {
				cout << "0";
			}
			cout << all[i];
		}
	}
}
