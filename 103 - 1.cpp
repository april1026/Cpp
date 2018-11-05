#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int N, M;
	cin >> N >> M;
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int K;
	cin >> K;
	int list[K];
	for (int i = 0; i < K; i++) {
		cin >> list[i];
	}
	
	int check[K];
	for (int i = 0; i < (pow(4,K)); i++) {
		int temp = i;
		for (int j = (K-1); j >= 0; j--) {
			int pownum = pow(4,j);
			check[j] = (temp / pownum);
			temp %= pownum;
		}
		/*for(int j = 0; j < K; j++) {
			cout << check[j] << " ";
		}
		cout << endl;*/
		int nowx = x1, nowy = y1;
		for (int j = 0; j < K; j++) {
			if (check[j] == 0) {
				nowx -= list[j];
			} else if (check[j] == 1) {
				nowx += list[j];
			} else if (check[j] == 2) {
				nowy -= list[j];
			} else if (check[j] == 3) {
				nowy += list[j];
			}
			if (nowx < 0) {
				nowx += N;
			} else if (nowx >= N) {
				nowx -= N;
			} else if (nowy < 0) {
				nowy += M;
			} else if (nowy >= M) {
				nowy -= M;
			}
			if (nowx == x2 && nowy == y2) {
				cout << "YES";
				
				return 0;
			}
		}
	}
	
	cout << "NO";
	
	return 0;
}
