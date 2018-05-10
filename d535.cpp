#include <iostream> 
using namespace std; 

int main() { 
	char number[100];
	int total_number;
	cin >> number;
	for (int i = 0; i < 100; i++) {
		if (number[i] == '\0') {
			total_number = i;
			break;
		}
	}
	int password = 0;
	
	int num[total_number];
	for (int i = 0; i < total_number; i++) {
		num[i] = int(number[i]) - '0';
	}
	
	for (int i = 0; i < total_number; i++) {
		if ( (num[i] * 2 >= num[i+1]) && (num[i] == num[total_number - i - 1]) ) {
			if (num[i] % 2 == 0)
				password = (password * 10 + num[i]);
		}else {
			cout << "INCORRECT" << endl;
			password = -1;
			break;
		} 	
	}
	
	if (password > 0)
		cout << password;
	
 return 0; 
}
