#include <iostream>
#include <string>
using namespace std;
int main() {
    int num;
    cin >> num;
    string input[num];
    for (int i = 0; i < num; i++) {
        cin >> input[i];
    }

    int times = 0;
    for (int i = 0; i < num; i++) {
    	//cout << "i" << i << " ";
        for (int j = (i + 1); j < num; j++) {
        	//cout << "j" << j << " ";
            times++;
        }
    }
    //cout << "times" << times;
    string test[times + times];
    times = 0;
    for (int i = 0; i < num; i++) {
        for (int j = (i + 1); j < num; j++) {
            test[times] = input[i] + input[j];
            test[times + 1] = input[j] + input[i];
            times += 2;
        }
    }
    
    /*for (int i = 0; i < times; i++) {
    	cout << test[i] << endl;
	}*/

    bool output = 1;
    for (int i = 0; i < times; i++) {
        if (output == 0) {
            break;
        }
        for (int j = (i + 1); j < times; j++) {
            if (test[i] == test[j]) {
                output = 0;
                break;
            }
        }
    }
    
    cout << output;

    return 0;
}
