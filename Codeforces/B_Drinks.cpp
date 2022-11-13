// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/200/B
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int> drinks(n);
	double sumd = 0;
	for (int i=0; i<n; i++) {
		cin>>drinks[i];
	}
	for (int i=0; i<n; i++) {
		sumd+=(((double)drinks[i])/100);
	}
	double answer = (sumd/n)*100;
	cout<<answer<<"\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
