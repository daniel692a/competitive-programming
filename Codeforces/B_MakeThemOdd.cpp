// time-limit: 3000
// problem-url: https://codeforces.com/contest/1277/problem/B
#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){
	int t, n;
	cin>>t;
	vector<int> nums;
	set<int> evens;
	while (t>0) {
		int attemps=0;
		cin>>n;
		nums.resize(n);
		for (int i=0; i<n; i++) {
			cin>>nums[i];
			if (nums[i]%2==0) {
				evens.insert(nums[i]);
			}
		}
		while(!evens.empty()){
			if (*--evens.end()==0) {
				break;
			} else {
				int temp = *--evens.end();
				evens.erase(temp);
				if((temp/2)%2==0){
					evens.insert(temp/2);
				}
				attemps++;
			}
		}
		cout<<attemps<<"\n";
		t--;
	}
	return 0;
}
