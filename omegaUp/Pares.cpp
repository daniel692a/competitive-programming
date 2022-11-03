#include <bits/stdc++.h>
#include <vector>

using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<long long int> nums(n);
	bool exists_even = false;
	for (int i=0; i<n; i++) {
		cin>>nums[i];
		if(!(nums[i]&1)){
			cout<<"["<<nums[i]<<"] ";
			exists_even=true;
		}
	}
	if(!exists_even){
		cout<<":(";
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
