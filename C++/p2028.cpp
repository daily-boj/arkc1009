#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	
	int T, N;
	cin >> T;
	
	while(T--) {
		cin >> N;
		int powCnt=log10(N)+1;
		if((N*N)%(int)(pow(10, powCnt))==N) cout << "YES";
		else cout << "NO";
		cout << "\n";
	}
	
	return 0;
}
