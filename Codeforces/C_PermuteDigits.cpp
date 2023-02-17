// time-limit: 1000
// problem-url: https://codeforces.com/contest/915/problem/C
#include <algorithm>
#include <array>
#include <bits/stdc++.h>
#include <functional>
#include <ios>

using namespace std;

#define ll long long int
#define endl '\n'
#define sz(x) (long long)x.size()

void solve(){
	string a, b;
	cin>>a>>b;
	sort(a.begin(), a.end(), greater<int>());
	if(sz(a)<sz(b)){
		cout<<a<<endl;
	} else {
		int i = 0;
		while(a>b){
			for(int j=i; j<sz(a); j++){
				string temp = a;
				swap(temp[j], temp[i]);
				sort(temp.begin()+i+1, temp.end());
				if(temp<=b){
					swap(a[i], a[j]);
					sort(a.begin()+i+1, a.end(), greater<int>());
					break;
				}
			}
			i++;
		}
		cout<<a<<endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
