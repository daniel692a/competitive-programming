// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/271/A
#include <bits/stdc++.h>
#include <string>
#include <unordered_set>

using namespace std;

void solve(){
	int y; cin>>y;
	unordered_set<char> digits;
	int ny = y+1;
	while(true){
		string ys = to_string(ny);
		for (int i=0; i<4; i++) {
			digits.insert(ys[i]);
		}
		if (digits.size()==4) {
			cout<<ny;
			break;
		} else {
			digits.clear();
		}
		ny++;
	}
}

int main(){
	solve();
	return 0;
}
