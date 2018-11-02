#include <iostream>
#include <string>
using namespace std;
int main() {
	string input;
	cin >> input;
	
	bool check = 0;
	string output;
	int start, end;
	for (int i = 0; i < input.size(); i++) {
		for (int j = (i + 1); j < input.size(); j++) {
			if (input[i] == input[j]) {
				string temp;
				temp = input[i];
				start = i;
				end = j;
				for (int k = 1; k < input.size() - start; k++) {
					if (input[start+k] == input[end+k]) {
						temp += input[start+k];
						if (temp.size() > output.size()) {
							output = temp;
						}
					} else {
						break;
					}
				}
			}
		}
	}
	
	cout << output;
	
}
