// time-limit: 1000
// problem-url: https://vjudge.net/contest/522946#problem/A
#include <bits/stdc++.h>
#include <unordered_set>
#include <vector>

using namespace std;

void solve(){
	int t, n;
	cin>>t;
	while (t--) {
		cin>>n;
		vector<int> nums(n);
		unordered_set<int> facts;
		for (int i=0; i<n; i++) {
			cin>>nums[i];
			facts.insert(nums[i]);
		}
		if(facts.size()==1){
			cout<<"YES\n";
		} else if (facts.size()==n) {
			cout<<"YES\n";
		} else {
			cout<<"NO\n";
		}
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
