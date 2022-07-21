// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/133/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	string p;
	cin>>p;
	bool generate_output = false;
	for(auto c: p){
		if(c=='H' or c=='Q' or c=='9'){
			generate_output = true;
			break;
		}
	}
	cout<<((generate_output)?"YES":"NO");
	return 0;
}
