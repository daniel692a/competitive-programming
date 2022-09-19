// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/814/C
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve(){
	int n=0, plans=0;
	string garland;
	cin>>n>>garland>>plans;

	while (plans>0) {
		char clr;
		int max_rp;
		cin>>max_rp>>clr;
		int l=0, r=0, koyomity=0;
		while(l < n and r < n) {
			while(r < n){
				if(garland[r]!=clr){
					if (max_rp==0) break;
					max_rp--;
				
				}
				r++;
			}
			koyomity=max(koyomity, r-l);
			max_rp += garland[l++] != clr;
		}
		cout<<koyomity<<"\n";
		plans--;
	}
}

int main(){
	solve();
	return 0;
}
