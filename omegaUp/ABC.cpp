#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

void solve(){
	vector<int> nums(3);
	for (int i=0; i<3; i++) {
		cin>>nums[i];
	}
	string orden;
	cin>>orden;
	sort(nums.begin(), nums.end());
	vector<int> answer(3);
	for (int i=0; i<3; i++) {
		if(orden[i]=='A'){
			answer[i]=nums[0];
		} else if(orden[i]=='B'){
			answer[i]=nums[1];
		} else{
			answer[i]=nums[2];
		}
	}
	for(auto c:answer){
		cout<<c<<" ";
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
