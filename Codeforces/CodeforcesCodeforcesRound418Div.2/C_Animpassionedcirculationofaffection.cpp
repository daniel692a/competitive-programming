// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/814/C
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve(){
	int n=0, max_length;
	cin>>n;
	string garland;
	cin>>garland;
	int plans=0;
	cin>>plans;
	int m, atmps;
	char clr;
	while (plans>0) {
		cin>>m>>clr;
		max_length=0;
		int l = 0, r=0;
		for (int i = 0; i<n; i++) {
			int length = 0;
			atmps = m;
			if(garland[i]==clr){
				l = i;
				r = i+1;
				length++;
				while (r<n and atmps!=0) {
					if(garland[r]!=clr){
						atmps--;
					} else {
						i=r-1;
					}
					r++;
					length++;
				}
				while(r<n and garland[r]==clr){
					length++;
					r++;
					i=r-1;
				}
			}
			if (atmps>0) length+=atmps;
			max_length = max(max_length, length);
		}
		if (max_length>n)
			max_length=n;
		cout<<max_length<<"\n";
		plans--;
	}
}

int main(){
	solve();
	return 0;
}
