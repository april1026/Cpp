#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int point[n];
	for (int i = 0; i < n; i++) {
		cin >> point[i];
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < (n-i-1); j++) {
			if (point[j] > point[j+1]) {
				int temp = point[j];
				point[j] = point[j+1];
				point[j+1] = temp;
			}
		}
	}
	
	/*for (int i = 0; i < n; i++) {
		cout << point[i];	
	}*/
	//cout << endl;
	
	for (int i = 0; i < (n-1); i++) {
		point[i+1] += point[i];
		//cout << point[i+1] << " ";
	}
	//cout << endl;
	for (int i = 0; i < (n-1); i++) {
		point[i+1] += point[i];
		//cout << point[i+1] << " ";
	}
	cout << point[n-1] - point[0];
}
