#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	a--;
	b--;
	int map[a][b];
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			map[i][j] = 0;
		}
	}
	
	int x[c], y[c];
	for (int i = 0; i < c; i++) {
		cin >> x[i] >> y[i];
		x[i]--;
		y[i]--;
		map[x[i]+1][y[i]] = 2;
		map[x[i]-1][y[i]] = 2;
		map[x[i]][y[i]+1] = 2;
		map[x[i]][y[i]-1] = 2;
	}
	for (int i = 0; i < c; i++) {
		map[x[i]][y[i]] = 3;
	}
	int K = 0;
	int vipx[4*c], vipy[4*c];
	for (int q = 0; q < a; q++) {
		for (int k = 0; k < b; k++) {
			if (map[q][k] == 2) {
				vipx[K] = q;
				vipy[K] = k;
				K++;
			}
		}
	}
	/*
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
	*/
	int check[K];
	int output = 0;
	for (int i = 0; i < (pow(2,K)); i++) {
		int temp = i;
		int sum = 0;
		for (int j = (K-1); j >= 0; j--) {
			int pownum = pow(2,j);
			check[j] = (temp / pownum);
			temp %= pownum;
			
			if (check[j] == 1 && map[vipx[j]][vipy[j]] != 1) {
				//cout << "s";
				sum++;
				map[vipx[j]-1][vipy[j]] = 1;
				map[vipx[j]+1][vipy[j]] = 1;
				map[vipx[j]-1][vipy[j]-1] = 1;
				map[vipx[j]+1][vipy[j]-1] = 1;
				map[vipx[j]-1][vipy[j]+1] = 1;
				map[vipx[j]+1][vipy[j]+1] = 1;
				map[vipx[j]][vipy[j]-1] = 1;
				map[vipx[j]][vipy[j]+1] = 1;
			}
			//cout << " check[" << j << "] " << check[j];
			/*
			for (int q = 0; q < a; q++) {
				cout << endl;
				for (int k = 0; k < b; k++) {
					cout << map[q][k] << " ";
				}
			}
			*/
		}
		for (int q = 0; q < a; q++) {
			for (int k = 0; k < b; k++) {
				map[q][k] = 0;
			}
		}
		for (int q = 0; q < c; q++) {
			map[x[q]+1][y[q]] = 2;
			map[x[q]-1][y[q]] = 2;
			map[x[q]][y[q]+1] = 2;
			map[x[q]][y[q]-1] = 2;
		}
		for (int q = 0; q < c; q++) {
			map[x[q]][y[q]] = 3;
		}
		//cout << endl << "sum " << sum << endl;
		if (sum > output) {
			output = sum;
		}
	}
	
	cout << output;
	
	return 0;
}
