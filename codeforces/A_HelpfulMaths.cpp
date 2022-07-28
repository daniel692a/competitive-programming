// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/339/A
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
	string s, answer;
	cin>>s;
	int c1=0, c2=0, c3=0;
	for (auto c: s) {
		if(c=='1') c1++;
		if(c=='2') c2++;
		if(c=='3') c3++;
	}
	for(int i=1; i<=c1; i++){	
		answer+="1+";
	}
	for(int i=1; i<=c2; i++){
		answer+="2+";
        }
	for(int i=1; i<=c3; i++){
		answer+="3+";
        }
	answer.erase(answer.size()-1);
	cout<<answer;
	return 0;
}
