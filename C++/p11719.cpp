#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string input[100];
	
	int i;
	for(i=0; i<100; i++) {
		getline(cin, input[i]);
		if(cin.eof()) break;
	}
	
	for(int j=0; j<i; j++) {
		cout << input[j] << "\n";
	}
	
	
	return 0;
}
