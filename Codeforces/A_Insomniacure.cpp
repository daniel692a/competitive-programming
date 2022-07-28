// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/148/A
#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

int main(){
	int k, l, m, n, d;
	unordered_set<int> damage_dragongs;
	cin>>k>>l>>m>>n>>d;
	for (int i=k; i<=d; i+=k) {
		damage_dragongs.insert(i);
	}
	for (int i=l; i<=d; i+=l) {
		damage_dragongs.insert(i);
	}
	for (int i=m; i<=d; i+=m) {
		damage_dragongs.insert(i);
	}
	for (int i=n; i<=d; i+=n) {
		damage_dragongs.insert(i);
	}
	cout<<damage_dragongs.size();
	return 0;
}
