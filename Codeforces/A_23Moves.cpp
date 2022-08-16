// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1716/A
//
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t = 0;
	cin>>t;
	while (t>0) {
		int n, minutes = 0;
		cin>>n;
		if(n<=1){
			cout<<(1+(n==1))<<"\n";
		} else {
			minutes = (n+2)/3;
			cout<<minutes<<"\n";
		}
		t--;
	}
	return 0;
}
