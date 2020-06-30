#include <iostream>

using namespace std;

int main() {
	
	int tc;
	cin >> tc;
	
	long long int koong[68];
	
	koong[0]=1;
	koong[1]=1;
	koong[2]=2;
	koong[3]=4;
	
	for(int i=4; i<=67; i++) {
		koong[i]=koong[i-1]+koong[i-2]+koong[i-3]+koong[i-4];
	}
	
	int idx;
	while(tc--) {
		cin >> idx;
		cout << koong[idx] << "\n";
	}
	
	return 0;
}
