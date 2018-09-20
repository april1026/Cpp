#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int num;
	cin >> num;
	
	int i = 0;
	
	//cout << i;
	for (int k = 1; (num / k) >= 1; k = k * 10) {
		i++;
	}
	
	int numlist[i];
	for (int j = 0; j < i; j++) {
		numlist[j] = (num % 10);
		num = num / 10;
	}
	
	int max = 0;
	int two = 0;
	for (int j = 0; j < i; j++) {
		if (numlist[j] > max) {
			max = numlist[j];
		}
	}
	
	for (int j = 0; j < i; j++) {
		if (numlist[j] != max && numlist[j] > two) {
			two = numlist[j];
		}
	}
	
	cout << two;
}
