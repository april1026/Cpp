#include <iostream>
using namespace std;
int main() {
	
	int k, n, m;
	cin >> k >> n >> m;
	int listnum = 1;
	for (int i = 0; i < n; i++) {
		listnum *= 2;
	}
	char like[m][2][2];
	int mh[n][listnum];
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> like[i][j];
			if (like[i][j][0] == 'm') {
				like[i][j][0] = 0;
			}else {
				like[i][j][0] = 1;
			}
		}
	}
	
	int change = 1;
	bool save = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < listnum; j++) {
			if (i == 0)
				mh[i][j] = j % 2; 
			else if (j % change == 0){
				if (save == 0)
					save = 1;
				else if (save == 1)
					save = 0;
				mh[i][j] = save;
			}else
				mh[i][j] = save;
		}
		change *= 2;
		save = 1;
	}
	
	
	
	return 0;
}
//https://zerojudge.tw/ShowProblem?problemid=b065
//https://tw.answers.yahoo.com/question/index?qid=20090419000015KK08872
