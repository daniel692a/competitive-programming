// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/236/A
#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

int main(){
	string user;
	cin>>user;
	unordered_set<char> chars;
	for(auto c:user){
		chars.insert(c);
	}
	cout<<((chars.size()%2==0)?"CHAT WITH HER!":"IGNORE HIM!");
	return 0;
}
