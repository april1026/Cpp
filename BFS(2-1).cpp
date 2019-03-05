#include <iostream>
#include <queue>
using namespace std;

int n, m, sy, sx, ey, ex;
char input_map[100][101];
int map[100][100];
int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};
struct spot {
	int y, x;
};
queue <spot> spots;

int bfs();

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> input_map[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (input_map[i][j] == '#')
				map[i][j] = -2;
			else
				map[i][j] = -1;
		}
	}
	
	cout << bfs();
	
	return 0;
}

int bfs() {
	spots.push(spot{sy, sx});
	map[sy][sx] = 0;
	while(spots.size()) {
		int nowy = spots.front().y;
		int nowx = spots.front().x;
		spots.pop();
		for (int i = 0; i < 4; i++) {
			int nexty = nowy + dy[i];
			int nextx = nowx + dx[i];
			
			if (nexty >= 0 && )
		}
	}
	
	return;
}
