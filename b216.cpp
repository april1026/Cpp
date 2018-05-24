#include <iostream>
using namespace std;
int main() {
	
	int hit[9] = {0};
	for (int i = 0; i < 9; i++) {
		int x, y;
		cin >> x >> y;
		
		if ( ((x % 10) == 0) || ((y % 10) == 0) ) {
			
		} else if ((x < 0) || (y < 0)) {
			
		} else if ((x < 10) && (y < 10)) {
			hit[7 - 1] = 1;
		} else if ((x < 20) && (y < 10)) {
			hit[8 - 1] = 1;
		} else if ((x < 30) && (y < 10)) {
			hit[9 - 1] = 1;
		} else if ((x < 10) && (y < 20)) {
			hit[4 - 1] = 1;
		} else if ((x < 10) && (y < 30)) {
			hit[1 - 1] = 1;
		} else if ((x < 20) && (y < 20)) {
			hit[5 - 1] = 1;
		} else if ((x < 20) && (y < 30)) {
			hit[2 - 1] = 1;
		} else if ((x < 30) && (y < 20)) {
			hit[6 - 1] = 1;
		} else if ((x < 30) && (y < 30)) {
			hit[3 - 1] = 1;
		} else {
			
		}
	}
	
	/*for (int i = 0; i < 9; i++)
		cout << hit[i];*/
	
	int lines = 0;
	for (int i = 0; i < 7; i+=3) {
		if ((hit[i] == 1) && (hit[i + 1] == 1) && (hit[i + 2] == 1)){
			lines++;
		}
	}
	for (int i = 0; i < 3; i++) {
		if ((hit[i] == 1) && (hit[i + 3] == 1) && (hit[i + 6] == 1)) {
			lines++;
		}
	}
	
	int num = 0;
	for (int i = 1; i <= 9; i++) {
		if ((i == 5) && (hit[i - 1] == 1))
			num+=2;
		else if ( ((i % 2) == 0) && (hit[i - 1] == 1) ) 
			num+=5;
		else if (hit[i - 1] == 1)
			num+=8;
	}
	
	cout << lines <<" " << num;
	
} 
