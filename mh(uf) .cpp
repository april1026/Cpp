#include <iostream>
using namespace std;
int main() {
	
	int k, n, m;
	cin >> k >> n >> m;
	
	int listnum = 1; //幾種可能性 
	for (int i = 0; i < n; i++) {
		listnum *= 2;
	} //2的n次方種可能性 
	
	int like[m][2][2];
	for (int i = 0; i < m; i++) {
		char input[3];
		for (int j = 0; j < 2; j++) {
			cin >> input;
			if (input[0] == 'm') {
				like[i][j][0] = 0;
			}else {
				like[i][j][0] = 1;
			}
		}
	}
	
	int mh[n][listnum];
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
	
	bool result[listnum] = 0;
	for (int i = 0; i < listnum; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				if (mh[ like[k][0][1] ][i] == like[k][0][0]) {
					result[i] = 1;
					break;
				}else if (mh[ like[k][1][1] ][i] == like[k][1][0]) {
					result[i] = 1;
					break;
				}
			}
		}
	}
	
	return 0;
}
//https://zerojudge.tw/ShowProblem?problemid=b065
//https://tw.answers.yahoo.com/question/index?qid=20090419000015KK08872
