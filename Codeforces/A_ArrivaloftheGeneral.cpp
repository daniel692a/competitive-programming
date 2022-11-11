// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/144/A
#include <bits/stdc++.h>
#include <climits>
#include <ios>
#include <type_traits>
#include <vector>

using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int> soldiers(n);
	int max_value=INT_MIN, min_value=INT_MAX;
	int max_index = -1, min_index = -1;
	for (int i=0; i<n; i++) {
		cin>>soldiers[i];
		if(soldiers[i]>max_value){
			max_value = soldiers[i];
			max_index = i;
		}
		if(soldiers[i]<=min_value){
			min_value = soldiers[i];
			min_index = i;
		}
	}
	int steps = 0;
	if (soldiers[min_index] == soldiers[max_index]){
		steps = 0;
	} else if(min_index<max_index){
		steps = abs(0-max_index) + (abs((n-1)-min_index)-1);
	} else {
		steps = abs(0-max_index) + (abs((n-1)-min_index));
	}
	cout<<steps<<"\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
