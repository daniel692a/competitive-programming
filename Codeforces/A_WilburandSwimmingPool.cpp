// time-limit: 1000
// problem-url: https://codeforces.com/contest/596/problem/A
#include <bits/stdc++.h>
#include <ios>
#include <vector>

using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int> point(n*2);
	for (int i=0; i<n*2; i++) {
		cin>>point[i];
	}
	if(n<2){
		cout<<"-1\n";
	} else {
		if((point[0]==point[2] and n==2) or (point[1]==point[3] and n==2)){
			cout<<"-1\n";
		} else {
			int base_1 = point[0];
			int base;
			int height1 = point[1];
			int height;
			for (int i = 2; i<n*2; i++) {
				if(i%2==0 and point[i]!=base_1){
					base = abs(base_1-point[i]);
				}
				if(i%2==1 and point[i]!=height1){
					height = abs(height1-point[i]);
				}
			}
			cout<<(base*height)<<"\n";
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
