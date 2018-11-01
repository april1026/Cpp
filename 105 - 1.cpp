#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int xyh[N][3];
    int far[N];
    for (int i = 0; i < N; i++) {
        cin >> xyh[i][0] >> xyh[i][1] >> xyh[i][2];
        far[i] = (xyh[i][0] * xyh[i][0] + xyh[i][1] * xyh[i][1]);
    }
    
    int happiness = 0;
    for (int i = 0; i < N; i++) {
        for (int j = (i+1); j < N; j++) {
            if ((far[i] - far[j]) > 0) {
                if (happiness < (xyh[j][2] - xyh[i][2]))
                    happiness = (xyh[j][2] - xyh[i][2]);
            } else if ((far[j] - far[i]) > 0) {
                if (happiness < (xyh[i][2] - xyh[j][2]))
                    happiness = (xyh[i][2] - xyh[j][2]);
            }
        }
    }
    
    cout << happiness;
    
    return 0;
}
