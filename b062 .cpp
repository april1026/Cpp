#include <iostream>
using namespace std;
int main () {
	int output[2];
	for (int a = 0; a < 2; a++) {
	  
		int m, ci, cj, N;
		cin >> m;
		char city[m][m+1];
		for (int i = 0; i < m; i++) {
			cin >> city[i];
		}
		cin >> ci >> cj >> N;
		
		int ways = 0;
		int now[9999999];
		int save[9999999];
		int citys = 1;
		for (int i = 0; i < 9999999; i++) {
			now[i] = 0;
			save[i] = 0;
		}
		now[0] = ci - 1;
		for (int i = 0; i < N; i++) {
			int nownum = 0;
			//cout << "距離" << i << endl; 
			for (int k = 0; k < citys; k++) {
			//cout << "citys" << citys << endl; 
				for (int j = 0; j < m; j++) {
				//cout << "j" << j << endl; 
					if (city[now[k]][j] == '1') {
						//cout << "if" << endl; 
				    	save[nownum] = j;
				    	nownum++;
				    	if (j == cj-1)
				        	ways++;
					}
				}
			}
			for (int i = 0; i < 9999999; i++) {
				now[i] = save[i];
			}
			citys = nownum;
		}
		
		output[a] = ways;
	}
	
	for (int i = 0; i < 2; i++) {
		cout << output[i];
	}
  
	return 0;
}
