#include <iostream>
#include <iomanip>

using namespace std;

int  main() {
	int ai, aj, bi, bj;
	cin >> ai >> aj >> bi >> bj;
	int a[ai][aj], b[bi][bj];
	for (int i = 0; i < ai; i++) {
		for (int j = 0; j < aj; j++) {
			cin >> a[i][j];
		}
	}
	system("cls");
	for (int i = 0; i < ai; i++) {
		for (int j = 0; j < aj; j++) {
			cout << setw(4) << a[i][j];
		}
		cout << endl;
	}
	cout << endl;
	
	for (int i = 0; i < bi; i++) {
		for (int j = 0; j < bj; j++) {
			cin >> b[i][j];
		}
	}
	system("cls");
	for (int i = 0; i < ai; i++) {
		for (int j = 0; j < aj; j++) {
			cout << setw(4) << a[i][j];
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < bi; i++) {
		for (int j = 0; j < bj; j++) {
			cout << setw(4) << b[i][j];
		}
		cout << endl;
	}
	cout << endl;
	
	for (int i = 0; i < ai; i++) {
		for (int j = 0; j < bj; j++) {
			int temp = 0;
			for (int k = 0; k < aj; k++) {
				temp += (a[i][k] * b[k][j]);
			}
			cout << setw(4) << temp << " ";
		}
		cout << endl;
	}
}
