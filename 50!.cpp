#include <iostream>
#define MAX 100000
using namespace std;
int main() {
	int all[13];
	
	for (int i = 0; i < 13; i++) {
		all[i] = 0;
	}
	all[0] = 1;
	
	int plus[12] = {0};
	for (int i = 1; i <= 50; i++) {
		for (int j = 0; j < 13; j++) {
			if (all[j] == 0) {
				continue;
			}
			all[j] = all[j] * i;
			if (j != 12 && all[j] > MAX) {
				plus[j] = (all[j] / MAX);
				all[j] = (all[j] % MAX);
			}
		}
		for (int j = 0; j < 12; j++) {
			all[j + 1] = all[j + 1] + plus[j];
			plus[j] = 0;
		}
	}
	
	for (int i = 12; i >= 0; i--) {
		if (all[i] < 10) {
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
