#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int point[n];
	for (int i = 0; i < n; i++) {
		cin >> point[i];
	}
	
	int min1, min2;
	int lastlist[n-1] = {0};
	for (int j = 0; j < (n-1); j++) {
		int max = 0;
		int location1, location2;
		for (int i = 0; i < (n-j); i++) {
			if (point[i] > max) {
				max = point[i];
				min1 = point[i];
				location1 = i;
				min2 = point[i];
				location2 = i;
			}
		}
		for (int i = 0; i < (n-j); i++) {
			if (point[i] < min1) {
				location1 = i;
				min1 = point[i];
			}
		}
		for (int i = 0; i < (n-j); i++) {
			if (i == location1) {
				continue;
			}
			if (point[i] < min2 && point[i] > min1) {
				location2 = i;
				min2 = point[i];
			} else if (point[i] <= min2 && point[i] == min1) {
				location2 = i;
				min2 = point[i];
			}
		}
		if (location1 > location2) {
			int temp = location1;
			location1 = location2;
			location2 = temp;
		}
		
		lastlist[j] = min1 + min2;
		point[location1] = lastlist[j];
		for (int i = location2; i < (n-j); i++) {
			point[i] = point[i+1];
		}
		/*for (int i = 0; i < n; i++) {
			cout << point[i] << " ";
		}
		cout << endl;*/
	}
	
	/*for (int i = 0; i < (n-1); i++) {
		cout << lastlist[i] << " ";
	}*/
	
	for (int i = 0; i < (n-2); i++) {
		lastlist[i+1] += lastlist[i];
	}
	cout << lastlist[n-2];
}
