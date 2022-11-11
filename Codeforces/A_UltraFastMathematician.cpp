// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/61/A
#include <bits/stdc++.h>

using namespace std;

void solve(){
	string n1, n2;
	cin>>n1>>n2;
	for (int i=0; i<n1.size(); i++) {
		if(n1[i]==n2[i]){
			cout<<"0";
		} else {
			cout<<"1";
		}
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
