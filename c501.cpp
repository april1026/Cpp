#include <iostream>
using namespace std;
int main() {
	int A;
	cin >> A;
	int output[A];
	for (int k = 0; k < A; k++) {
	    int balls, sets;
	    cin >> balls >> sets;
	    int distance[balls];
	    int color[balls];
	    int colors = 3;
	    for (int i = 0; i < balls; i++) {
	        cin >> distance[i] >> color[i];
	        /*if (color[i] == 2 && colors == 1)
	            colors = 2;
	        else if (color[i] == 3)
	            colors = 3;*/
	    }
	    for (int i = 1; i <= balls; i++) {
	        for (int j = 0; j < (balls - i); j++) {
	            if (distance[j] > distance[j + 1]) {
	                int temp[2];
	                temp[0] = distance[j + 1];
	                temp[1] = color[j + 1];
	                distance[j + 1] = distance[j];
	                color[j + 1] = color[j];
	                distance[j] = temp[0];
	                color[j] = temp[1];
	            }
	        }
	    }
	    /*for (int i = 0; i < balls; i++) {
	    	cout << distance[i] << " " << color[i] << endl;
		}*/
	    int check[colors] = {0};
	    int i;
	    for (i = 0; i < balls; i++) {
	        int a = 0;
	        //cout << "i" << i + 1 << endl;
	        for (int j = 0; j < colors; j++) {
	            if (check[j] == sets) {
	                a++;
	            }
	            //cout << check[j] << " ";
	        }
	        if (a == colors) {
	        	i--;
	            break;
	        }
	            
	        if (check[color[i] - 1] < sets) {
	            check[color[i] - 1]++;
	        } else {
	            continue;
	        }
	    }
	    int a = 0;
	    //cout << endl << "i" << i + 1 << endl;
	    for (int j = 0; j < colors; j++) {
	        if (check[j] == sets) {
	            a++;
	        }
	        //cout << check[j] << " ";
	    }
	    if (a == colors) {
		    output[k] = (distance[i] - 1);
	    } else {
	    	output[k] = -1;
		}
	}
	for (int i = 0; i < A; i++) {
		if (output[i] == -1) {
			cout << "QQ" << endl;
		} else {
			cout << output[i] << endl;
		}
	}

    return 0;
}
