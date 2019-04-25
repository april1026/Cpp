#include <iostream>
using namespace std;

int main() {
	int I, J;
	cin >> J >> I;
	int num[I][J];
	for (int j = 0; j < J; j++) {
		for (int i = 0; i < I; i++) {
			cin >> num[i][j];
		}
	}
	
	for (int i = 0; i < I; i++) {
		for (int j = 0; j < J; j++) {
			cout << num[i][j] << " ";
		}
		cout << '\n';
	}
}
