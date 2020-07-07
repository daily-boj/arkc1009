#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	
	vector<int>num;
	string N;
	cin >> N;
	reverse(N.begin(), N.end());
	for(int i=0; i<N.size(); i++) {
		num.push_back(N[i]-'0');
	}
	
	if(N.size()<2) cout << N;
	else {
		for(int i=0; num.size()-i>=2; i++) {
			if(num[i]>=5) {
				if(i==num.size()-1) num.push_back(1);
				else num[i+1]+=1;		
			}
			num[i]=0;
		}
		
		for(int i=num.size()-1; i>=0; i--) {
			cout << num[i];
		}
	}
	
	return 0;
}
