#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	long long int r, c, t;
	cin >> r >> c >> t;
	long long int n = max(r, c);
	long long int num[n][n] = {};
	for (long long int i = 0; i < r; i++) {
		for (long long int j = 0; j < c; j++) {
			cin >> num[i][j];
		}
	}
	bool move[t];
	for (int k = t-1; k >= 0; k--) {
		cin >> move[k];
	}
	for (long long int k = 0; k < t; k++) {
//		cout << '\n' << '\n';
//		for (int i = 0; i < r; i++) {
//			for (int j = 0; j < c; j++) {
//				cout << num[i][j] << " ";
//			}
//			cout << '\n';
//		}
		if (move[k] == 1) {
			for (long long int i = 0; i < r/2; i++) {
				for (long long int j = 0; j < c; j++) {
					long long int temp = num[i][j];
					num[i][j] = num[r-i-1][j];
					num[r-i-1][j] = temp;
				}
			}
		} else {
			long long int temp = r;
			r = c;
			c = temp;
			long long int tempnum[n][n] = {};
			for (long long int i = 0; i < r; i++) {
				for (long long int j = 0; j < c; j++) {
					tempnum[i][j] = num[j][r-1-i];
				}
			}
			for (long long int i = 0; i < r; i++) {
				for (long long int j = 0; j < c; j++) {
					num[i][j] = tempnum[i][j];
				}
			}
		}
		
	}
	
	cout << r << " " << c << '\n';
	for (long long int i = 0; i < r; i++) {
		for (long long int j = 0; j < c; j++) {
			cout << num[i][j] << " ";
		}
		cout << '\n';
	}
}
