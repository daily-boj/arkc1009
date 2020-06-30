#include <iostream>

using namespace std;

int main() {
	
	int r, e, c;
	
	int tc;
	cin >> tc;
	
	while(tc--) {
		cin >> r >> e >> c;
		if((e-c)>r) cout << "advertise";
		else if((e-c)==r) cout << "does not matter";
		else cout << "do not advertise";
		cout << "\n";	
	}
	
	return 0;
}
