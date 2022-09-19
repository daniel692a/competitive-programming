// time-limit: 7000
// problem-url: https://vjudge.net/contest/511992#problem/G
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void solve(){
	int n, sum=0, q=0, l=0, r=0;
	cin>>n;
	vector<int> nums(n);
	vector<int> prefixSum(n);
	for (int i=0; i<n; i++) {
		cin>>nums[i];
		sum+=nums[i];
		prefixSum[i] = sum;
	}
	cin>>q;
	while(q--){
		cin>>l>>r;
		cout<<(prefixSum[r]-prefixSum[l-1])<<"\n";
	}
}

int main(){
	solve();
	return 0;
}
