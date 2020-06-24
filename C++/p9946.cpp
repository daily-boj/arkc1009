#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	
	string bef, aft;
	
	for(int i=1; ; i++) {
		cin >> bef;
		cin >> aft;
		if(bef=="END" && aft=="END") {
			break;
		}
		sort(bef.begin(), bef.end());
		sort(aft.begin(), aft.end());
		
		cout << "Case " << i << ": "; 
		if(bef==aft) {
			cout << "same";
		}
		else {
			cout << "different";
		}
		cout << "\n";
	}
	return 0;
}
