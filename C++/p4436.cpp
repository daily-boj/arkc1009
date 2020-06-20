#include <iostream>
#include <algorithm>

using namespace std;

void solved(long long int n) {
	bool chk[10]={false};
	bool sw=false;
	long long int save = n;
	
	for(int k=1; ; k++) {
		sw=false;
		n=save*k;
		string a=to_string(n);
		for(int i=0; i<a.size(); i++) {
			int idx = a[i]-'0';
			if(chk[idx]) continue;
			else {
				chk[idx]=true;
				sw=true;	
			}
		}
		if(!sw) {
			bool sw2=false;
			for(int i=0; i<10; i++) {
				if(chk[i]) continue;
				sw2=true;
				break;
			}
			if(!sw2) {
				cout << k-1 << "\n";
				return;	
			}
			
		}		
	}
	
}

int main() {
	
	long long int n;
	cin >> n;
	while(!cin.eof()) {
		solved(n);
		cin >> n;
	}
	
	
	return 0;
}
