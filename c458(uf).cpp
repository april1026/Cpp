#include <iostream>
using namespace std;
int main() {
    char first[100];
    char second[100];
    cin >> first;
    cin >> second;
    int L, K;
    cin >> L >> K;

    int fend, send;
    for (int i = 0; i < 100; i++) {
        if (first[i] == '\0') {
            fend = i + 1;
            break;
        }
    }
    for (int i = 0; i < 100; i++) {
        if (second[i] == '\0') {
            send = i + 1;
            break;
        }
    }

    int FirstDifference[99];
    int fcount = 0;
    int SecondDifference[99];
    int scount = 0;
    for (int i = 0; i < fend; i++) {
        if (i == 0) {
            int k = 0;
        } else {
            int k = SecondDifference[scount - 1] + 1;
        }
        for (int j = k; j < (send - k); j++) {
            if (first[i] == second[j]) {
                continue;
            } else if (j == (send - k - 1) && first[i] != second[j]) {
                FirstDifference[fcount] = i;
                fcount++;
                k = send;
            }
        }
        for (int j = k; j < (send - k); j++) {
            if (first[i] == second[j]){
                break;
            } else {
                SecondDifference[scount] = j;
                scount++;
            }
        }
    }
    return 0;
}
