// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/233/A
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

void solve(){
	int n;
	cin>>n;
	if((n%2)!=0){
		cout<<-1;
	} else {
		int i=1;
		while(i<=n){
			cout<<(i+1)<<" "<<i<<" ";	
			i+=2;
		}
	}
}

int main(){
	solve();
	return 0;
}
