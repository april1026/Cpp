#include <iostream>
using namespace std;

int main() {
	int sx, sy, ex, ey, F;
	float time;
	int x, y, nowx, nowy;
	cin >> sy >> sx >> ey >> ex >> F >> time;
	cin >> y >> x;
	int map[x][y];
	nowx = sx;
	nowy = sy;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cin >> map[i][j];
		}
	}
	
	int n = 0, times = 0;
	int outputx[F] = {0}, outputy[F] = {0};
	int pathx[x*y] = {0}, pathy[x*y] = {0};
	pathx[n] = sx;
	pathy[n] = sy;
	while (nowx != ex || nowy != ey) {
		cout << endl;
		map[nowx][nowy] = 2;
		map[ex][ey] = 5;
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) {
				cout <<  map[i][j] << " ";
			}
			cout << endl;
		}
		map[nowx][nowy] = 0;
		map[ex][ey] = 0;
		system("PAUSE");
		if (ex < nowx && map[nowx-1][nowy] == 0 && nowx != 0) {
			outputx[times] = nowx;
			outputy[times] = nowy;
			times++;
			while (map[nowx-1][nowy] == 0 && nowx != 0) {
				nowx--;
				n++;
				pathx[n] = nowx;
				pathy[n] = nowy;
				if (nowx == ex && nowy == ey)
					break;
			}
			continue;
		} else if (ex > nowx && map[nowx+1][nowy] == 0 && nowx != (x-1)) {
			outputx[times] = nowx;
			outputy[times] = nowy;
			times++;
			while (map[nowx+1][nowy] == 0 && nowx != (x-1)) {
				nowx++;
				n++;
				pathx[n] = nowx;
				pathy[n] = nowy;
				if (nowx == ex && nowy == ey)
					break;
			}
			continue;
		}else if (ey < nowy && map[nowx][nowy-1] == 0 && nowy != 0) {
			outputx[times] = nowx;
			outputy[times] = nowy;
			times++;
			while (map[nowx][nowy-1] == 0 && nowy != 0) {
				nowy--;
				n++;
				pathx[n] = nowx;
				pathy[n] = nowy;
				if (nowx == ex && nowy == ey)
					break;
			}
			continue;
		} else if (ey > nowy && map[nowx][nowy+1] == 0 && nowy != (y-1)) {
			outputx[times] = nowx;
			outputy[times] = nowy;
			times++;
			while (map[nowx][nowy+1] == 0 && nowy != (y-1)) {
				nowy++;
				n++;
				pathx[n] = nowx;
				pathy[n] = nowy;
				if (nowx == ex && nowy == ey)
					break;
			}
			continue;
		} else {
			map[pathx[n]][pathy[n]] = 1;
			n--;
			cout << "path[" << n << "] x = " << pathx[n] << " y = "<< pathy[n] << endl;
			nowx = pathx[n];
			nowy = pathy[n];
		}
	}
	
	cout << times << endl;
	for (int i = 1; i < times; i++) {
		cout << outputy[i] << " " << outputx[i] << endl;
	}
	cout << ey << " " << ex;
	
	return 0;
}
