// time-limit: 2000
// problem-url: https://codeforces.com/contest/725/problem/A
#include <bits/stdc++.h>
#include <ios>

using namespace std;

void solve(){
	int n;
	string bumpers;
	cin>>n>>bumpers;
	int answer=0;
	int i=0;
	while(i<bumpers.size() and bumpers[i]=='<'){
		answer++;
		i++;
	}
	i=bumpers.size()-1;
	while(i>-1 and bumpers[i]=='>'){
		answer++;
		i--;
	}
	cout<<answer<<"\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
