#include <bits/stdc++.h>
#include <vector>

using namespace std;

void solve(){
	int n, m;
	cin>>n>>m;
	vector<int> toys(n);
	map<int, int> bucket;
	for (int i=0; i<n; i++) {
		cin>>toys[i];
		if(!bucket[toys[i]]){
			bucket[toys[i]]=1;
		} else {
			bucket[toys[i]]++;
		}
	}
	for (int i=1; i<=m; i++) {
		if(i==m){
			cout<<i<<":"<<bucket[i];
		} else if (!bucket[i]) {
			cout<<i<<":"<<0<<"\n";
		} else {
			cout<<i<<":"<<bucket[i]<<"\n";
		}
	}

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
