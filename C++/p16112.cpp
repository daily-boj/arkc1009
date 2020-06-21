#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	
	int n, k;
	cin >> n >> k;
	long long int reword;
	long long int total=0;
	long long int stoneCnt=0;
	vector<long long int>exp;
	
	for(int i=0; i<n; i++) {
		cin >> reword;
		exp.push_back(reword);
	}
	sort(exp.begin(), exp.end());
	
	for(int i=0; i<exp.size(); i++) {
		total+=(stoneCnt*exp[i]);
		if(stoneCnt<k) stoneCnt++;
	}
	
	cout << total;
	
	return 0;
}
