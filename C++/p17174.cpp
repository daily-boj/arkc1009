#include <iostream>

using namespace std;

int main() {
	
	int N, M;	
	cin >> N >> M;
	
	int result=N;
	
	while(N>=M) {
		result+=(N/M);
		N/=M;
	}
	
	cout << result;
	
	return 0;
}
