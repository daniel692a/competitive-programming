// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1020/B
#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<vector<int>> adjacent_list;
vector<bool> visited;

int dfs(int current){
	visited[current]=true;
	int res;
	for (int i=0; i<adjacent_list[current].size(); i++) {
		int next = adjacent_list[current][i];
		if(!visited[next]){
			res = dfs(next);
		} else {
			return next;
		}
	}
	return res;
}

int main(){
	int n;
	cin>>n;
	adjacent_list.resize(n);
	visited.resize(n);

	for (int i=0; i<n; i++) {
		int u=i, v;
		cin>>v;
		adjacent_list[u].push_back(v-1);
	}
	for (int i=0; i<n; i++) {
		visited.assign(n, false);
		cout<<dfs(i)+1<<" ";
	}
	return 0;
}
