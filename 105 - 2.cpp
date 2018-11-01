#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int xy[c][2];
    for (int i = 0; i < c; i++) {
        cin >> xy[i][0] >> xy[i][1];
        xy[i][0]--;
        xy[i][1]--;
    }
    
    bool map[a][b];
    for (int i = 0; i < a; i++) {
    	for (int j = 0; j < b; j++) {
    		map[i][j] = 0;
    		//cout << map[i][j] << " ";
		}
		//cout << endl;
	}
    int output = c;
    for (int i = 0; i < c; i++) {
        for (int j = -1; j <= 1; j++) {
            if (map[xy[i][0] + j][xy[i][1]] == 1 || map[xy[i][0]][xy[i][1] + j] == 1 || map[xy[i][0] + j][xy[i][1] + j] == 1) {
                output--;
                break;
			}
        }
        for (int j = -1; j <= 1; j++) {
            map[xy[i][0] + j][xy[i][1]] = 1;
            map[xy[i][0]][xy[i][1] + j] = 1;
            map[xy[i][0] + j][xy[i][1] + j] = 1;
            map[xy[i][0] - j][xy[i][1] + j] = 1;
        }
    }
    
    /*for (int i = 0; i < a; i++) {
    	for (int j = 0; j < b; j++) {
    		cout << map[i][j] << " ";
		}
		cout << endl;
	}*/
    
    cout << output;

    return 0;
}
