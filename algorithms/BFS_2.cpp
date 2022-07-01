#include <bits/stdc++.h>
#include <cstdint>
#include <queue>
#include <tuple>
#include <set>

using namespace std;

int BFS(int r, int c){
	queue<tuple<int, int>> q;
	set<tuple<int, int>> visited;
	visited.insert(make_tuple(r, c));
	q.push(make_tuple(r,c));
	while(!q.empty()){
		auto [row, col] = q.front();
		q.pop();
		vector<vector<int>> directions([1, 0], [-1,0], [0, 1], [0, -1]);
		for(auto [dr, dc]: directions){
			r = row+dr;
			c= col+dc;

		}

	}
	return -1;
}

int main(){
	return 0;
}
