// time-limit: 1000
// problem-url: https://codeforces.com/contest/1758/problem/A
#include <bits/stdc++.h>

using namespace std;

#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string ans = s;
        for (int i = s.size()-1; i >= 0; i--){
            ans += s[i];
        }
        cout<<ans<<"\n";
    }
}

int main(){
    fastIO();
    solve();
    return 0;
}