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
	char mh[n][listnum];
	
	
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
	
	
	
}
//https://zerojudge.tw/ShowProblem?problemid=b065
//https://tw.answers.yahoo.com/question/index?qid=20090419000015KK08872
