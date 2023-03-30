// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc096/tasks/abc096_b?lang=en
#include <bits/stdc++.h>

using namespace std;

void solve(){
	int a, b, c, k;
	cin>>a>>b>>c>>k;
	int answer = 0;
	bool itsA = false, itsB = false, itsC = false;
	if(a>=b and a>=c){
		itsA = true;
	} else if (b>=a and b>=c) {
		itsB = true;
	} else {
		itsC = true;
	}
	while(k--){
		if(itsA) a *= 2;
		if(itsB) b *= 2;
		if(itsC) c *= 2;	
	}
	answer = a + b + c;
	cout<<answer<<"\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
