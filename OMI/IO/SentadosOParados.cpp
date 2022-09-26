#include <bits/stdc++.h>
#define fastIO(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve(){
	int r, s, b, up=0, sit=0, chairs = 0;
	cin>>r>>s>>b;
	chairs = r*s;
	up = (b<chairs)?0:(b-chairs);
	sit = (b<chairs)?b:(b-up);
	cout<<sit<<" "<<up;
}

int main(){
	fastIO();
	solve();
	return 0;
}
