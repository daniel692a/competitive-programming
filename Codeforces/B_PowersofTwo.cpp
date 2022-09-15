// time-limit: 3000
// problem-url: https://codeforces.com/problemset/problem/702/B
#include <bits/stdc++.h>
#include <map>
#include <math.h>
#include <vector>

typedef long long ll;

using namespace std;

bool check_pow(int n){
	return n && (!(n&(n-1)));
}

ll bi(ll a, ll b){
	ll res=1;
	while (b) {
		if(b&1){
			res*=a;
		}
		a*=a;
		b>>=1;
	}
	return res;
}

void solve(){
	ll n, num_pairs=0;
	cin>>n;
	vector<int> nums(n);
	map<int, int> cnt;
	for (int i=0; i<n; i++) {
		cin>>nums[i];
		for (int j=0; j<32; j++) {
			num_pairs+=cnt[bi(2, j)-nums[i]];
		}
		cnt[nums[i]]++;
	}
	cout<<num_pairs;
}

int main(){
	solve();
	return 0;
}
