#include <iostream>
using namespace std;
int main() {
    int times;
    cin >> times;
    char key[10];
    cin >> key;
    int keylong;
    for (keylong = 0; keylong < 10; keylong++) {
        if (key[keylong] == '\0') {
            break;
        }
    }

    int output = 0;
    for (int i = 0; i < times; i++) {
        char intput[100];
        cin >> intput;
        for (int j = 0; intput[j] != '\0'; j++) {
            if (key[0] == intput[j]) {
                output++;
                for (int k = 0; k < keylong; k++) {
                    if (key[k] != intput[j + k]) {
                        output--;
                        break;
                    }
                }
            }
        }
    }
    cout << output;
    return 0;
}
