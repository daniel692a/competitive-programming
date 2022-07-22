// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/71/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	while (n>0) {
		string word;
		cin>>word;
		if (word.size()>10) {
			cout<<word[0]<<word.size()-2<<word[word.size()-1]<<"\n";
		} else {
			cout<<word<<"\n";
		}
		n--;
	}
	return 0;
}
