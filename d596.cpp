#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	int output[num][9] = {0};
	int count[num] = {0};
	for (int q = 0; q < num; q++){
		int next;
		cin >> next;
		int a, b;
		cin >> a >> b;
		
		for (int i = 1; i <= 9; i++) {
			if (i + 1  == next || i - 1  == next || i + 3  == next || i - 3  == next){
				//cout << i << "a";//
				if (i + 1  != a && i - 1  != a && i + 3  != a && i - 3  != a){
					//cout << "b";//
					if (i + 1  != b && i - 1  != b && i + 3  != b && i - 3  != b){
						//cout << "c";//
						output[q][count[q]] = i;
						//cout << output[q][count[q]] << q << count[q];//
						count[q]++;
					}
				}
			}
		}
	}
	
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < 9; j++) {
			if (output[i][0] == 0){
				cout << "Empty";
				break;
			}else if (output[i][j] != 0)
				cout << output[i][j] << " ";
		}
		cout << endl;
	}
} 
