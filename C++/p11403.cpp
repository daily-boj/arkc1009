#include <iostream>

bool gr[101][101]={false};
bool chk[101][101]={false};

using namespace std;

int N;

void dfs(int a, int idx) {
	
	for(int i=1; i<=N; i++) {
		if(!chk[idx][i] && gr[a][i]) {
			chk[idx][i]=true;
			dfs(i, idx);
		}
	}
	
}

int main() {

	cin >> N;
	
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=N; j++) {
			cin >> gr[i][j];
		}
	}
	
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=N; j++) {
			if(!chk[i][j] && gr[i][j]) {
				dfs(i, i);
			}
		}
	}
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=N; j++) {
			cout << chk[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}
