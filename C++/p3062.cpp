#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	
	string N;
	int T;
	
	cin >> T;
	while(T--) {
		
		cin >> N;
		string nClone = N;
		
		reverse(N.begin(), N.end());
		
		int nInt = stoi(nClone);
		int revInt = stoi(N)+nInt;
		
		string revStr = to_string(revInt);
		string revStrClone = revStr;
		
		reverse(revStr.begin(), revStr.end());
		
		if(revStr==revStrClone) cout << "YES";
		else cout << "NO";
		cout << "\n";
			
	}
	
	return 0;
}
