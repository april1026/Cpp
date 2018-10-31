#include <iostream>
using namespace std;
int main() {
    int x, y, n;
    cin >> x >> y >> n;
    int stuff[n][3];
    for (int i = 0; i < n; i++) {
        cin >> stuff[i][0] >> stuff[i][1] >> stuff[i][2];
    }

    int all = 0;
    for (int i = 0; i < n; i++) {
        for (int j = (i + 1); j < n; j++) {
            if (stuff[i][0] + stuff[j][0] <= x && stuff[i][1] + stuff[j][1] <= y) {
                all++;
            }
        }
    }
    int compare[all] = {0};
    all = 0;
    for (int i = 0; i < n; i++) {
        for (int j = (i + 1); j < n; j++) {
            if (stuff[i][0] + stuff[j][0] <= x && stuff[i][1] + stuff[j][1] <= y) {
                compare[all] = stuff[i][2] + stuff[j][2];
                all++;
            }
        }
    }
    
    int output = 0;
    for (int i = 0; i < all; i++) {
        if (output < compare[i]) {
            output = compare[i];
        }
    }
    
    cout << output;

    return 0;
}
