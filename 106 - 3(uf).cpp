#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int input[n];
    int key[n];
    for (int i = 0; i < n; ++i) {
        cin >> input[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> key[i];
    }

    int yet[n];
    for (int i = 0; i < n; i++) {
        yet[i] = key[i] - input[i];
        if (yet[i] == -8) {
            yet[i] = 1;
        } else if (yet[i] < 0) {
            yet[i] += 10;
        }
    }
    
    int i = 1, times = 0;
    while (i <= 9) {
        bool temp = 0;
        for (int j = 0; j < n; j++) {
            if (yet[j] == 0) {
                continue;
            } else if (yet[j] == i) {
                temp = 1;
                if (j == 0 || yet[j+1] > yet[j-1]) {
                    for (int q = 0; q < k; q++) {
                        yet[j+q]--;
                    }
                    times++;
                } else if (j == (n-1) || yet[j-1] > yet[j+1]) {
                    for (int q = 0; q < k; q++) {
                        yet[j-q]--;
                    }
                }
            }
        }
        if (temp == 0) {
            i++;
        }
    }
    
    int check = 0;
    for (int i = 0; i < n; i++) {
        if (yet[i] != 0) {
            check = 1;
        }
    }
    if (check) {
        cout << '0';
    } else {
        cout << times;
    }

    return 0;
}
