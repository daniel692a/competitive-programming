// time-limit: 1000
// problem-url: https://codeforces.com/contest/1734/problem/A
#include <algorithm>
#include <bits/stdc++.h>
#include <cstdlib>
#include <limits>
#include <vector>

using namespace std;

void solve(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> sticks(n);
		for (int i=0; i<n; i++) {
			cin>>sticks[i];
		}
		sort(sticks.begin(), sticks.end());
		int minop = numeric_limits<int>::max(), l = 0, r = 2;
		while(r<n){
			int ops;
			for (int i=l; i<=r; i++) {
				ops = 0;
				for (int j=l; j<=r; j++) {
					ops+=abs(sticks[i]-sticks[j]);
				}
				if (ops == 0) {
					minop = 0;
					break;
				}
				minop = min(minop, ops);
			}
			r++;
			l++;
		}
		cout<<minop<<"\n";
	}
}

int main(){
	solve();
	return 0;
}
