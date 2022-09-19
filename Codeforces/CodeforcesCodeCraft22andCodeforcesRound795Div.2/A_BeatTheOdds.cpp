// time-limit: 1000
// problem-url: https://codeforces.com/contest/1691/problem/A
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
        int i=0, j=1;
        int remove = 0;
        while (j<n){
            if((nums[i]+nums[j])%2!=0){
                remove++;
                j++;
            } else{
                j++;
                i=j-1;
            }
        }
        cout<<remove<<"\n";
    }
}

int main(){
    solve();
    return 0;
}
