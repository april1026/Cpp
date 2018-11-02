#include <iostream>
using namespace std;

int main() {
	int sx, sy, ex, ey, F;
	float time;
	int x, y, nowx, nowy;
	cin >> sx >> sy >> ex >> ey >> F >> time;
	cin >> x >> y;
	int pathx[x*y] = {0}, pathy[x*y] = {0};
	bool map[x][y];
	nowx = sx;
	nowy = sy;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cin >> map[i][j];
		}
	}
	
	while (nowx != ex || nowy != ey) {
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) {
				cout <<  map[i][j] << " ";
			}
			cout << endl;
		}
		if (ex < nowx && map[nowx-1][nowy] == 0 && nowx != 0) {
			while (map[nowx-1][nowy] == 0 && nowx != 0) {
				nowx--;
				pathx[n]
			}
			continue;
		} else if (ex > nowx && map[nowx+1][nowy] == 0 && nowx != (x-1)) {
			while (map[nowx+1][nowy] == 0 && nowx != (x-1)) {
				nowx++;
			}
			continue;
		}else if (ey < nowy && map[nowx][nowy-1] == 0 && nowy != 0) {
			while (map[nowx][nowy-1] == 0 && nowy != 0) {
				nowy--;
			}
			continue;
		} else if (ey > nowy && map[nowx][nowy+1] == 0 && nowy != (y-1)) {
			while (map[nowx][nowy+1] == 0 && nowy != (y-1)) {
				nowy++;
			}
			continue;
		} else {
			
		}
	}
	
	
	return 0;
}
