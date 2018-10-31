#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    int players[num][2];
    for (int i = 0; i < num; i++) {
        cin >> players[i][0] >> players[i][1];
    }
    
    int wins[num] = {0};
    for (int i = 0; i < (num -1); i++) {
        for (int j = 1; j < (num - i); j++) {
            if (players[i + j][0] > players[i][0])
                break;
            else if (players[i + j][1] > players[i][1])
                break;
            else
                wins[i]++;
        }
    }
    for (int i = (num -1); i > 0; i--) {
        for (int j = 1; j < (num - i); j++) {
            if (players[i - j][0] > players[i][0])
                break;
            else if (players[i - j][1] > players[i][1])
                break;
            else
                wins[i]++;
        }
    }
    
    int output = 0;
    for (int i = 0; i < num; i++) {
        if (wins[i] > output)
            output = wins[i];
    }
    
    cout << output;
    
    return 0;
}
