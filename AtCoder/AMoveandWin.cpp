// time-limit: 1000
// problem-url: https://atcoder.jp/contests/agc020/tasks/agc020_a?lang=en
#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n, a, b;
	cin>>n>>a>>b;
	if((b-a)%2==1){
		cout<<"Borys\n";
	} else {
		cout<<"Alice\n";
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
