#include <iostream>

using namespace std;

int main() {
	
	string id;
	
	cin >> id;
	
	for(int i=0; i<3; i++) {
		if(i==1) {
			cout << ":fan:" << ":" << id << ":" << ":fan:";
		}
		else {
			for(int j=0; j<3; j++) {
				cout << ":fan:";	
			}	
		}
		
		cout << "\n";
	}
	
	return 0;
}
