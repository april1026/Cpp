#include <iostream>
#include <iomanip>
#include <algorithm>
#include <queue>

using namespace std;

int xd[4] = {0, 0, -1, 1};
int yd[4] = {-1, 1, 0, 0};
int n;
int map[100][100];

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			char temp;
			cin >> temp;
			if (temp == '#')
				map[i][j] = -1000000;
			else
				map[i][j] = 1000000;
		}
	}
	map[1][1] = 1;
	queue <int> bfsx;
	queue <int> bfsy;
	bfsx.push(2);
	bfsx.push(1);
	bfsy.push(1);
	bfsy.push(2);
	while(!bfsx.empty()) {
		if (map[bfsx.front()][bfsy.front()] == -1000000 || map[bfsx.front()][bfsy.front()] != 1000000) {
			bfsx.pop();
			bfsy.pop();
			continue;
		} else if (map[bfsx.front()][bfsy.front()] == 1000000) {
			int steps = 1000000;
			for (int i = 0; i < 4; i++) {
				if (map[bfsx.front()+xd[i]][bfsy.front()+yd[i]] == -1000000) {
					continue;
				}
				steps = min (steps, map[bfsx.front()+xd[i]][bfsy.front()+yd[i]]);
			}
			map[bfsx.front()][bfsy.front()] = steps + 1;
		}
		for (int i = 0; i < 4; i++) {
			bfsx.push(bfsx.front()+xd[i]);
			bfsy.push(bfsy.front()+yd[i]);
		}
	}
//	for (int i = 1; i < (n-1); i++) {
//		for (int j = 1; j < (n-1); j++) {
//			cout << setw(10) << map[i][j] << " ";
//		}
//		cout << "\n";
//	}
	if (map[n-2][n-2] == 1000000) 
		cout << "No solution!";
	else
		cout << map[n-2][n-2];
}
