#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main() 
{
	srand((unsigned)time(NULL));
	int n = rand() % 10 + 1;
	
	int num[n];
	for (int i = 0; i < n; i++) {
		num[i] = rand() % 100 + 1;
	}
	
	for (int i = 0; i < n; i++) {
		int temp = num[i];
		int temp_num = i;
		for (int j = i; j < n; j++) {
			if (num[j] < temp)
				temp = num[j];
				temp_num = j;
		}
		num[temp_num] = num[i];
		num[i] = temp;
	}
	
	//cout
	for (int i = 0; i < n; i++)
		cout << num[i] << " ";
}
