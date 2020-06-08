#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	
	int N, x, y;
	vector<pair<int, int>>pos;
	cin >> N;
	
	for(int i=0; i<N; i++) {
		cin >> x >> y;
		pos.push_back(make_pair(x, y));
	}
	
	sort(pos.begin(), pos.end());
	
	for(int i=0; i<N; i++) {
		cout << pos[i].first << " " << pos[i].second << "\n";
	}
	
	return 0;
}
