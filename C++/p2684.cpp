#include <iostream>

using namespace std;

int main() {
	
	string preset[8]={"TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT", "HHH"};
	int cnt[8]={0};
	
	string input;

	int T;
	cin >> T;
	while(T--) {
		cin >> input;
		string temp;
		for(int i=0; i<input.length()-2; i++) {
			temp=input.substr(i, 3);
			for(int j=0; j<8; j++)
				if(temp==preset[j]) cnt[j]++;	
		}
		for(int i=0; i<8; i++) {
			cout << cnt[i] << " ";
			cnt[i]=0;
		}
		cout << "\n";
	}
	
	return 0;
}
