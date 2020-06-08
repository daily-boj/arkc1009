#include <iostream>

//8911 거북이 문제
//음 시간 놓쳐서 데백 복습에 안들어감 슬프다 

using namespace std;

int main() {
	
	int T;
	string command;
	
	cin >> T;
	
	for(int tc=0; tc<T; tc++) {
		int pos[2]={0}; //pos[0]=y, pos[1]=x
		int FB=1;
		int pSW=0;
		int Lcnt=0;
		int Rcnt=1;
		int maxX=0, maxY=0, minX=0, minY=0;
		cin >> command;
		for(int i=0; i<command.size(); i++) {
			if(command[i]=='F') {
				pos[pSW]+=FB;
				maxX=max(maxX, pos[1]);
				maxY=max(maxY, pos[0]);
				minX=min(minX, pos[1]);
				minY=min(minY, pos[0]);
			}
			else if(command[i]=='B') {
				pos[pSW]-=FB;
				maxX=max(maxX, pos[1]);
				maxY=max(maxY, pos[0]);
				minX=min(minX, pos[1]);
				minY=min(minY, pos[0]);
			}
			else if(command[i]=='L') {
				if(pSW) pSW=0;
				else pSW=1;
				if(Lcnt%2==0) FB*=-1;
				Lcnt++;
				Rcnt--;
			}
			else if(command[i]=='R') {
				if(pSW) pSW=0;
				else pSW=1;
				if(Rcnt%2==0) FB*=-1;
				Rcnt++;
				Lcnt--;
			}
		}
		cout << (maxX-minX)*(maxY-minY) << "\n";
	}
	
	return 0;
}
