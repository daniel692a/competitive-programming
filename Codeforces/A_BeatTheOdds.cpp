// time-limit: 1000
// problem-url: https://codeforces.com/contest/1691/problem/A
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void solve(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin>>nums[i];
        }
        int evens = 0, odds=0;
        for(int j=0; j<n; j++){
		if(nums[j]%2==0){
			evens++;
		} else {
			odds++;
		}
        }
        cout<<(min(evens, odds))<<"\n";
    }
}

int main(){
    solve();
    return 0;
}
