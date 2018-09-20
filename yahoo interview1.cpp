#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int num;
	cin >> num;
	
	int i = 0;
	
	for (int k = 1; (num / k) >= 1; k = k * 10) {
		i++;
	}
	
	int numlist[i];
	for (int j = 0; j < i; j++) {
		numlist[j] = (num % 10);
		num = num / 10;
	}
	
	int sum = 0;
	for (int j = 0; j < i; j++) {
		sum = sum + numlist[j];
	}
	
	cout << sum;
}
