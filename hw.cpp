#include <iostream>
#include <string>

using namespace std;

int shift(char);

int main() {
    string output;
    char a;
    while (a = cin.get()) {
        if (a == '\n') {
            break;
        } else {
            output += a;
        }
    }
    string key;
    while (a = cin.get()) {
        if (a == '\n') {
            break;
        } else {
            key += a;
        }
    }

    for(int j = 0; j < key.size(); j++) {
        if ((key[j] < int('a') || key[j] > int('z')) && (key[j] < int('A') || key[j] > int('Z'))) {
            if (key[j] >= int('0') && key[j] <= int('9')) {
                cout << "密鑰不能包含數字";
            } else if (key[j] == int(' ')) {
                cout << "密鑰不能多於一組單詞";
            }
            return 0;
        }
    }

    for (int i = 0, j = 0; i < output.size(); i++, j++) {
        if (j >= key.size()) {
            j = 0;
        }
        	
        if (output[i] >= int('a') && output[i] <= int('z')) {
            output[i] = (int(output[i]) - int('a') + shift(key[j])) % 26 + int('a');
        } else if (output[i] >= int('A') && output[i] <= int('Z')) {
            output[i] = (int(output[i]) - int('A') + shift(key[j])) % 26 + int('A');
        }
    }
    cout << output;
    
    
}

int shift(char c) {
	if (int(c) >= int('a') && int(c) <= int('z'))
    	return int(c) - int('a');
    else if (int(c) >= int('A') && int(c) <= int('Z'))
    	return int(c) - int('A');
}
