#include <iostream>
using namespace std;
int main() {
    float now, steps, times;
    now = 0;
    steps = 1;
    times = 1;
    float O;
    bool line[500] = {0};
    float intput[2];
    cin >> intput[0] >> intput[1];
    while(1) {
    	if (intput[0] == 0 && intput[1] == 0) {
    		break;
		}
        if ((now - steps) > 0 && line [int(now - steps)] == 0) {
        	O = (now - steps / 2);
            now -= steps;
        } else {
        	O = (now + steps / 2);
            now += steps;
        }
        line[int(now)] = 1;
        
        if (intput[1] == 0 && intput[0] == now) {
        	cout << times;
    		//cout << O ;
        	break;
		} else {
			//cout << times << " ";
			//cout << O << " ";
			float r = steps / 2;
	        float a = float((intput[0] - O) * (intput[0] - O));
	        float b = float(intput[1] * intput[1]);
	        float c = float(r * r);
	        /*if(now == 12)
				cout << a << " " << b << " " << c << endl;*/
	        if ((a + b) == c) {
	        	cout << times;
	        	break;
			}
		}
        steps++;
        times++;
    }
    return 0;
}
