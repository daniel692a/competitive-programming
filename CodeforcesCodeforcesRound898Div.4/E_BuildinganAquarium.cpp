// time-limit: 2000
// problem-url: https://codeforces.com/contest/1873/problem/E
#include <bits/stdc++.h>

using namespace std;

#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

void solve(){
    int t; cin>>t;
    while(t--){
        ll int n, x;
        cin>>n>>x;
        vector<ll int> coral(n);
        ll int sumc = 0;
        ll int r = -1;
        for(int i=0; i<n; i++){
            cin>>coral[i];
            sumc += coral[i];
            r = max(r, coral[i]);
        }
        ll int area = n*r;
        int l=0;
        while(l<=r){
            int mid = (l+r)/2;
        }
    }
}

int main(){
    fastIO();
    solve();
    return 0;
}