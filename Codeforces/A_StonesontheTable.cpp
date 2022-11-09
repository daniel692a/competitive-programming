// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/266/A
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<char> stones(n);
	for (int i=0; i<n; i++) {
		cin>>stones[i];
	}
	int remove = 0;
	for (int i=0; i<n; i++) {
		if(stones[i]==stones[i+1]){
			remove++;
		}
	}
	cout<<remove<<"\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
