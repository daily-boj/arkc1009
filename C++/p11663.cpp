#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	set<long long int>pos;
	set<long long int>::iterator it;
	int N, M;
	int start, end;
	int temp;
	
	cin >> N >> M;
	
	for(int i=0; i<N; i++) {
		cin >> temp;
		pos.insert(temp);
	}

	int cnt=0;
	bool sw=true;
	int startPos, endPos;
	
	for(int i=0; i<M; i++) {
		sw=true;
		cin >> start >> end;
		for(it=pos.begin(); it!=pos.end(); it++) {
			cnt++;
			if(*it>=start && sw) {
				sw=false;
				startPos=cnt;
			}
			if(*it<=end) {
				endPos=cnt;
			}
		}
		cout << (endPos-startPos)+1 << "\n";
	}
	
	
	return 0;
}
