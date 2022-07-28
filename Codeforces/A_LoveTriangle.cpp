// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/939/A
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	bool exists = false;
	vector<vector<int>> adjacent_list(n);

	for (int i=0; i<n; i++) {
		int u;
		cin>>u;
		adjacent_list[i].push_back(u-1);
	}
	for (int i=0; i<n; i++) {
		int next = adjacent_list[i][0];
		int connect = adjacent_list[next][0];
		if (i == adjacent_list[connect][0]) {
			exists = true;
			break;
		}
	}
	cout<<(exists?"YES":"NO");
	return 0;
}
