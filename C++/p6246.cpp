#include <iostream>

//6246 Ç³¼±³îÀÌ ¹®Á¦
//

using namespace std;

int main() {
	
	bool slot[10001]={false}; 
	
	int N, Q, L, I;
	int cnt=0;
	
	cin >> N >> Q;
	for(int i=1; i<=Q; i++) {
		cin >> L >> I;
		for(int j=L; j<=N; j+=I) slot[j]=true;
	}
	
	for(int i=1; i<=N; i++) {
		if(!slot[i]) cnt++;
	}
	
	cout << cnt;
	
	return 0;
}
