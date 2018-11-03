#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int y, x, sy, sx, ey, ex;
	cin >> y >> x >> sy >> sx >> ey >> ex;
	int K;
	cin >> K;
	int Klong[K];
	for (int i = 0; i < K; i++) {
		cin >> Klong[i];
	}
	
	bool list[K];
	for (int i = 0; i < (pow(2,K)); i++) {
		int temp = i;
		for (int j = (K-1); j >= 0; j--) {
			int pownum = pow(2,j);
			list[j] = (temp / pownum);
			temp %= pownum;
		}
		/*for(int j = 0; j < K; j++) {
			cout << list[j] << " ";
		}
		cout << endl;*/
		int lr[K], ud[k];
		for (int j = 0; j < K; j++) {
			
		} 
	}
}
