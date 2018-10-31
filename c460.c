#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int race1[n/3][3] = {0};#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int race1[n][3] = {0};
    int race2[n][3] = {0};
    int race3[n][3] = {0};
    
    int r1 = 0, r2 = 0, r3 = 0;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp == 1) {
            cin >> race1[r1][0] >> race1[r1][1] >> race1[r1][2];
            r1++;
        } else if (temp == 2) {
            cin >> race2[r2][0] >> race2[r2][1] >> race2[r2][2];
            r2++;
        } else if (temp == 3) {
            cin >> race3[r3][0] >> race3[r3][1] >> race3[r3][2];
            r3++;
        }
    }
    
    int ways = 0;
    for (int i = 0; i < r1; i++) { //race1[i]
        for (int j = 0; j < r2; j++) { //race2[j]
            for (int k = 0; k < r3; k++) { //race3[k]
                bool a = 0, b = 0, c = 0;
                if (race1[i][0]  == 1 || race2[j][0]  == 1|| race3[k][0] == 1) {
                    a = 1;
                }
				if (race1[i][1]  == 1 || race2[j][1]  == 1|| race3[k][1] == 1) {
                    b = 1;
                }
				if (race1[i][2]  == 1 || race2[j][2]  == 1|| race3[k][2] == 1) {
                    c = 1;
                }
                
                if (a == 1 && b == 1 && c == 1) {
                    ways++;
                }
            }
        }
    }
    cout << ways;
    
    return 0;
}
    int race2[n/3][3] = {0};
    int race3[n/3][3] = {0};
    
    int r1 = 0, r2 = 0, r3 = 0;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp == 1) {
            cin >> race1[r1][0] >> race1[r1][1] >> race1[r1][2];
            r1++;
        } else if (temp == 2) {
            cin >> race2[r2][0] >> race2[r2][1] >> race2[r2][2];
            r2++;
        } else if (temp == 3) {
            cin >> race3[r3][0] >> race3[r3][1] >> race3[r3][2];
            r3++;
        }
    }
    
    int ways = 0;
    for (int i = 0; i < (n/3); i++) { //race1[i]
        for (int j = 0; j < (n/3); j++) { //race2[j]
            for (int k = 0; k < (n/3); k++) { //race3[k]
                bool a = 0, b = 0, c = 0;
                if (race1[i][0]  == 1 || race2[j][0]  == 1|| race3[k][0] == 1) {
                    a = 1;
                }
				if (race1[i][1]  == 1 || race2[j][1]  == 1|| race3[k][1] == 1) {
                    b = 1;
                }
				if (race1[i][2]  == 1 || race2[j][2]  == 1|| race3[k][2] == 1) {
                    c = 1;
                }
                
                if (a == 1 && b == 1 && c == 1) {
                    ways++;
                }
            }
        }
    }
    cout << ways;
    
    return 0;
}
