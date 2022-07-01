#include <bits/stdc++.h>
#include <vector>

using namespace  std;

/*
 * Graph
	B---C---D
	|  / \  |
	| /   \	|
	|/     \|
	A---F---E

*/

int main(){
	int n, m;
	cin>>n>>m;
	vector<vector<int>> adjacent_list(n);
	for (int i=0; i<m; i++) {
		int u, v;
		cin>>u>>v;
		adjacent_list[u].push_back(v);
		adjacent_list[v].push_back(u);
	}

	for (int i=0; i<n; i++) {
		cout<<i<<": ";
		for (int j=0; j<adjacent_list[i].size(); j++) {
			cout<<adjacent_list[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	return 0;
}
