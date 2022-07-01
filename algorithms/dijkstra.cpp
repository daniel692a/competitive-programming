#include <bits/stdc++.h>
#include <queue>
#include <tuple>
#include <vector>

using namespace std;

struct destiny{
	int vertex;
	int weight;
};

/*bool opearaor<(destiny a, destiny b){
	return a.weight > b.weight;
}*/


int main(){
	int n, m;
	cin>>n>>m;
	vector<vector<destiny>> graph(n);
	for(int i=0; i<m; i++){
		int u, v, cost;
		cin>>u>>v>>cost;
		graph[u].push_back(destiny {v, cost});
		graph[v].push_back(destiny {u, cost});
	}
	int start;
	cin>>start;
	priority_queue<destiny> pq;
	pq.push(destiny {start, 0});
	vector<int> visited(n, -1);

	do {
		destiny current = pq.top();
		pq.pop();
		if(visited[current.vertex]==-1){
			visited[current.vertex] = current.weight;
			for(destiny adjacent: graph[current.vertex]){
				pq.push(destiny {adjacent.vertex, adjacent.weight+current.weight});
			}
		}
	}while (!pq.empty());
	
	for(int vertex: visited){
		cout<<vertex<<"\n";
	}
	return 0;
}
