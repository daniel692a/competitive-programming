// time-limit: 1000
// problem-url: https://codeforces.com/gym/103940/problem/H
#include <bits/stdc++.h>
#include <unordered_set>
#include <vector>

using namespace std;

#define fastIO(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
	int friends, max_num;
	cin>>friends>>max_num;
	vector<int> funny(friends);
	bool has_one = false;
	for (int i=0; i<friends; i++) {
		cin>>funny[i];
		if(funny[i]==1){
			has_one = true;
		}
	}
	int answer = 0;
	if (has_one) {
		answer = max_num;
	} else if(friends==1) {
		answer = (max_num/funny[0]);
	} else {
		unordered_set<int> laughs;
		for (int i=0; i<friends; i++) {
			int j = funny[i];
			while (j<=max_num) {
				laughs.insert(j);
				j+=funny[i];
			}
		}
		answer = laughs.size();
	}
	cout<<answer;
}

int main(){
	fastIO();
	solve();
	return 0;
}

