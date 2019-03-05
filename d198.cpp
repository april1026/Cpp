#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {
	int W, N;
	cin >> W >> N;
	int dp[W][N] = {0};
	for (int i = 0; i < W; i++) {
		string temp;
		cin.getline(temp, N*2+2);
		int a = 0;
		int block[N] = {0};
		for (int j = 0; j < N*2+2; j++) {
			if (temp[j] >= '0' && temp <= '9') {
				block[a] = (temp[j] - int('0'));
			}
		}
	}
} 
