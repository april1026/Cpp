#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int result;
	cin >> result;
	
	int output = 0;
	if ((a & b) == result){
		cout << "AND\n";
		output++;
	}
	if ((a | b) == result){
		cout << "OR\n";
		output++;
	}
	if ((a ^ b) == result){
		cout << "XOR\n";
		output++;
	}
	
	cout << '\b';
	
	if (output == 0)
	 cout << "IMPOSSIBLE";
}
