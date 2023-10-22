// time-limit: 1000
// problem-url: https://codeforces.com/contest/1882/problem/A
#include <bits/stdc++.h>

using namespace std;

#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> seqb(n);
        vector<int> seqa(n);
        for(int i=0; i<n; i++){
            cin>>seqa[i];
            if(i==0){
                seqb[i] = ((seqa[i]==1) ? seqa[i]+1 : 1);
            }
            if(seqa[i]-1==seqb[i-1] or seqa[i]+1!=seqb[i-1]+1){
                seqb[i] = seqb[i-1]+1;
            } else {
                seqb[i] = seqa[i]+1;
            }
        }
        cout<<seqb[n-1]<<"\n";
    }
}

int main(){
    fastIO();
    solve();
    return 0;
}