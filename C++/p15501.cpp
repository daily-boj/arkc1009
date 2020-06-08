#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	
	int n, temp;
	vector<long long int>arr1;
	vector<long long int>arr2;
	int point;
	
	cin >> n;
	
	for(int i=0; i<n; i++) {
		cin >> temp;
		arr1.push_back(temp);
	}
	for(int i=0; i<n; i++) {
		cin >> temp;
		arr2.push_back(temp);
		if(arr2[i]==1) point=i;
	}
	
	bool sw=false;
	int point1=point;
	
	for(int i=0; i<n; i++) {
		if(point1==n) point1=0;
		if(arr1[i]!=arr2[point1++]) {
			sw=false;
			break;
		}
		sw=true;
	}
	
	if(!sw) {
		for(int i=0; i<n; i++) {		
			if(point==-1) point=n-1;
			if(arr1[i]!=arr2[point--]) {
				sw=false;
				break;
			}
			sw=true;
		}
	}
	
	if(sw) cout << "good puzzle";
	else cout << "bad puzzle";
	
	return 0;
}
