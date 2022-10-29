// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/540/A
#include <bits/stdc++.h>
#include <ios>
#include <iostream>
#include <string>

using namespace std;

void solve(){
	int n;
	cin>>n;
	string actual, combination;
	cin>>actual>>combination;
	int moves = 0;
	for (int i=0; i<n; i++) {
		int crrntSt = actual[i]-48;
		int crrntCm = combination[i]-48;
		moves += min(abs(crrntCm-crrntSt), abs(10-max(crrntCm, crrntSt))+min(crrntSt, crrntCm));
	}
	cout<<moves;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
