#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int b;
    char N[9];
    cin >> b >> N;

    int num = 0;
    int numlong = 0;
    
    for (int i = 0; i < 8; i++) {
        if (N[i] == '\0')
            break;
        else
        	numlong++;
    }
//    cout << "numlong" << numlong << endl;
    
    int T = 0;
    for (int i = 0; i < numlong; i++) {
        int temp = N[numlong-1-i] - '0';
        num += temp * pow(b, i);
//        cout << "temp" << temp << endl;
//        cout << "pow" << pow(temp, numlong) << endl;
        T += pow(temp, numlong);
//        cout << "T" << T << endl;
    }
    
    if (T == num) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    

    return 0;
}
