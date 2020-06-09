#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main() {
	
	set<int>arr;
	
	int n, input, x;
	int cnt=0;
	
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> input;
		arr.insert(input);	
	}	
	
	cin >> x;
	
	for(auto i=arr.begin(); i!=arr.end(); i++) {
		if(*i<x) {
			int temp = x-*i;
			auto idx = arr.find(temp);
			if(idx!=arr.end()) {
				cnt++;
			}
		}
	}
	
	cout << cnt/2;
	
	return 0;
}
