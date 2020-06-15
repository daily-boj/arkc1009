#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int INF = 10000000;
int N, E;
	
vector<pair<int, int>>gans[801]; //간선정보 
int d[801];//최소비용 

void dijkstra(int start) {
	
	for(int i=1; i<=N; i++) d[i]=INF;
	d[start]=0;
	priority_queue<pair<int, int>>pq; // 힙 구조
	pq.push(make_pair(start, 0));
	
	while(!pq.empty()) {
		int current = pq.top().first;
		int distance = -pq.top().second;
		pq.pop();
		
		if(d[current] < distance) continue;
		for(int i=0; i<gans[current].size(); i++) {
			
			int next = gans[current][i].first; //선택된 노드의 인접 노드 (정점) 
			int nextDistance = distance + gans[current][i].second; 
			
			if(nextDistance < d[next]) {
				d[next]=nextDistance;
				pq.push(make_pair(next, -nextDistance));
			}
		}
	}  
}

int main() {
	

	int a, b, c;
	cin >> N >> E;
	for(int i=1; i<=E; i++) {
		cin >> a >> b >> c;
		gans[a].push_back(make_pair(b, c));
		gans[b].push_back(make_pair(a, c));
	}
	int v1, v2;
	cin >> v1 >> v2;
		
	dijkstra(1);
	
	int oneV1=d[v1];
	int oneV2=d[v2];
	
	dijkstra(N);
	
	int nV1=d[v1];
	int nV2=d[v2];
	
	dijkstra(v1);
	
	int V1V2=d[v2];
	
	bool check1=false;
	bool check2=false;
	int root1=0;
	int root2=0;
	
	
	if(!(oneV1>=INF || V1V2>=INF || nV2>=INF)) {
		root1=oneV1+V1V2+nV2;
		check1=true;
	}
	if(!(oneV2>=INF || V1V2>=INF || nV1>=INF)) {
		root2=oneV2+V1V2+nV1;
		check2=true;
	}
	
	if(!check1 || !check2) cout << -1;
	else cout << min(root1, root2);
	
	return 0;
}
