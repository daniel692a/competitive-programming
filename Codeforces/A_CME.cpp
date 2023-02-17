// time-limit: 1000
// problem-url: https://codeforces.com/contest/1223/problem/A
#include <bits/stdc++.h>
#include <ios>

using namespace std;

void solve(){
	int t, m;
	cin>>t;
	while(t--){
		cin>>m;
		/*int a=1, b=1, c=m-2;
		int cnt=0;
		while (a+b!=c) {
			if(a+b<c){
				b++;
				c--;
			}
			if(a+b>c){
				c++;
				cnt++;
			}
		}*/
		if(m==2){
			cout<<2<<"\n";
		} else if(m&1){
			cout<<1<<"\n";
		} else {
			cout<<0<<"\n";
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
