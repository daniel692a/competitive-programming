// time-limit: 2000
// problem-url: https://vjudge.net/contest/530006#problem/A
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void solve(){
	int n, x;
	cin>>n>>x;
	vector<int> permutation(n);
	int answer = 0;
	for(int i=0; i<n; i++){
		cin>>permutation[i];
		if(permutation[i]==x){
			answer=i+1;
		}
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
