#include <iostream>
using namespace std;
int main() {
    int numlong;
    cin >> numlong;
    int input[numlong];
    for (int i = 0; i < numlong; i++) {
        cin >> input[i];
    }
    
    for (int i = 1; i < numlong; i++) {
        for (int j = 0; j < numlong - i; j++) {
            if (input[j] > input[j+1]) {
                int temp;
                temp = input[j];
                input[j] = input[j+1];
                input[j+1] = temp;
            }
        }
    }
    
    int T = 1;
    for (int i = 1; i < numlong; i++) {
        if (input[i-1] + 1 == input[i]) {
            T++;
        } else {
            break;
        }
    }

    cout << input[0] << " " << input[numlong-1] << " ";
    if (T == numlong) {
        cout << "yes";
    } else {
        cout << "no";
    }
    
    return 0;
}
