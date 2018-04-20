#include<iostream>
#inclode <cmath> 
using namespace std;
int main(){
	
	int k, m;
	double n, a=2;
	int p;
	p=pow(a,n);
	cin>>k>>n>>m;
	char like[m][2][2];
	char mh[n][p];
	
	for(int i=0; i<m; i++){
		for(int j=0; j<2; j++){
			cin>>like[i][j][0]>>like[i][j][1];
			if(like[i][j][0]=='m'){
				like[i][j][0]=0;
			}else{
				like[i][j][0]=1;
			}
		}
	}
	
	
	
}
//https://zerojudge.tw/ShowProblem?problemid=b065
//https://tw.answers.yahoo.com/question/index?qid=20090419000015KK08872
