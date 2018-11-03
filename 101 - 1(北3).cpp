#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int N, m;
	cin >> N >> m;
	float x[m], y[m];
	for (int i = 0; i < m; i++) {
		cin >> x[i] >> y[i];
	}
	
	float output = (2 * N);
	for (int i = 0; i < m; i++) {
		for (int j = (i+1); j < m; j++) {
			float temp = pow( pow((x[i] - x[j]), 2) + pow(y[i] - y[j], 2), 0.5 );
			if (output > temp) {
				output = temp;
			}
		}
	}
	
	printf("%.4f", output);
} 
