// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/266/B
#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n, t;
	cin>>n>>t;
	vector<char> queue(n);
	for (int i =0; i<n; i++) {
		cin>>queue[i];
	}
	while(t>0){
		for (int i=0; i<n-1; i++) {
			if(queue[i]=='B' and queue[i+1]=='G'){
				swap(queue[i], queue[i+1]);
				i++;
			}
		}
		t--;
	}	
	for(auto c:queue){
		cout<<c;
	}
	cout<<"\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
