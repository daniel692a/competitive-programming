// time-limit: 2000
// problem-url: https://vjudge.net/contest/530006#problem/B
#include <bits/stdc++.h>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
	vector<long long int> nums(4);
	for (int i=0; i<4; i++) {
		cin>>nums[i];
	}
	long long int answer=LLONG_MIN;
	long long int pr1, pr2, best=LLONG_MIN;
	for (int i=0; i<2; i++) {
		if(i==0) {
			pr1 = nums[i]*nums[i+2];
			pr2 = nums[i]*nums[i+3];
		} else {
			pr1 = nums[i]*nums[i+1];
			pr2 = nums[i]*nums[i+2];
		}
		best = max(pr2, pr1);
		answer = max(answer, best);
	}
	cout<<answer<<"\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
