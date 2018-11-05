#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	int  map[m][n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}
	
	int output = 0;
	for (int q = 0; q < m; q++) {
		for (int k = 0; k < n; k++) {
			int K = (m - q - 1) + (n - k - 1);
			int check[K];
			for (int i = 0; i < (pow(2,K)); i++) {
				int sum = map[q][k];
				int nowq = q, nowk = k;
				int temp = i;
				for (int j = (K-1); j >= 0; j--) {
					int pownum = pow(2,j);
					check[j] = (temp / pownum);
					temp %= pownum;
					//cout << " " << check[j] << " ";
					if ((nowk + 1) >= n && check[j] == 0) {
						continue;
					} else if ((nowq + 1) >= m && check[j] == 1) {
						continue;
					} else if (check[j] == 0) {
						nowk++;
					} else if (check[j] == 1) {
						nowq++;
					}
					sum += map[nowq][nowk];
					//cout << " map " << map[nowq][nowk];
					if (sum > output) {
						output = sum;
					}
				}
				//cout << endl;
				//cout << "q " << q << "  k " << k << "  sum " << sum << endl << endl;
			}
		}
	}
	cout << output;
	
	return 0;
}
