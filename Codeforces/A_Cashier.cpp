// time-limit: 2000
// problem-url: https://codeforces.com/contest/1059/problem/A
#include <bits/stdc++.h>
#define fastIO(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve(){
	int customers, day, breakt;
	cin>>customers>>day>>breakt;
	int l = 0, r= 0, breaks = 0;
	for (int i=0; i<customers; i++) {
		int arrival, spend;
		cin>>arrival>>spend;
		r = arrival;
		breaks += ((r-l)/breakt);
		l = r + spend;
	}
	breaks+=((day-l)/breakt);
	cout<<breaks;
}

int main(){
	fastIO();
	solve();
	return 0;
}
