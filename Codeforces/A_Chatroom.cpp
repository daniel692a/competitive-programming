// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/58/A
//
#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	string hello = "hello";
	int j = 0;
	cin>>s;
	for (int i=0; i<s.size(); i++) {
		if(j==5) break;
		if(s[i]==hello[j]){
			j++;
		}
	}
	cout<<((j==5)?"YES":"NO");
	return 0;
}
