#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	string input[n][2];
	for (int i = 0; i < n; i++) {
		cin >> input[i][0] >> input[i][1];
	}
	string key[2];
	cin >> key[0] >> key[1];
	
	string next[n*2], next1[n*2];
	int nextnum = 0, next1num = 0;
	for (int a = 0; a < 2; a++) {
		for (int i = 0; i < n; i++) {
			if (input[i][a] == key[0]) {
				if (a == 0) {
					if (input[i][1] == key[1])
						goto print1;
					next[nextnum] = input[i][1];
					nextnum++;
				} else if (a == 1) {
					if (input[i][0] == key[1])
						goto print1;
					next[nextnum] = input[i][0];
					nextnum++;
				} 
			}
		}
	}
	
	while (true) {
		for (int q = 0; q < nextnum; q++) {
			for (int a = 0; a < 2; a++) {
				for (int i = 0; i < n; i++) {
					if (input[i][a] == next[q]) {
						if (next[i] == key[1])
								goto print1;
						if (a == 0) {
							next1[next1num] = input[i][1];
							next1num++;
						} else if (a == 1) {
							next1[next1num] = input[i][0];
							next1num++;
						}
					}
				}
			}
		}
		for (int q = 0; q < next1num; q++) {
			for (int a = 0; a < 2; a++) {
				for (int i = 0; i < n; i++) {
					if (input[i][a] == next1[q]) {
						if (next1[i] == key[1])
								goto print1;
						if (a == 0) {
							next[nextnum] = input[i][1];
							nextnum++;
						} else if (a == 1) {
							next[nextnum] = input[i][0];
							nextnum++;
						}
					}
				}
			}
		}
	}
	print1:
	
	return 0;
}
