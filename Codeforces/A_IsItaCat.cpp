// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1800/A
#include <bits/stdc++.h>
#include <cctype>

using namespace std;

void solve(){
	bool itsACat = false;
	int t;
	string meow = "meow";
	cin>>t;
	while(t--){
		itsACat = true;
		int n;
		cin>>n;
		string input;
		cin>>input;
		int i=0, k=0;
		if(n<4){
			cout<<"NO\n";
		} else if(tolower(input[0])!='m'){
			cout<<"NO\n";
		} else {
			while(i<n){
				while(tolower(input[i])==meow[k]){
					i++;
				}
				k++;
				if(tolower(input[i])!=meow[k]){
					itsACat = false;
					break;
				}
				i++;
			}
			if(k<3){
				itsACat=false;
			}
			cout<<((itsACat)?"YES":"NO")<<"\n";
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
