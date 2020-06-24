#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	
	string inputs;
	char alpha;	
	int cnt=0;
	
	while(1) {
		cnt=0;
		cin >> alpha;
		getline(cin, inputs, '\n');
		if(alpha=='#') break;
		cnt+=count(inputs.begin(), inputs.end(), alpha);
		cnt+=count(inputs.begin(), inputs.end(), toupper(alpha));	
		cout << alpha << " " << cnt << "\n";	
	}

	return 0;
}
