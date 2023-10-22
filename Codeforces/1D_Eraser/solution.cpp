#include <bits/stdc++.h>

using namespace std;

#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

void solve(){
    int t; cin>>t;
    while(t--){
        int k, n;
        cin>>n>>k;
        string strip;
        cin>>strip;
        int i=0;
        int ans = 0;
        while (i<n){
            if(strip[i]=='B'){
                i+=k;
                ans++;
            } else {
                i++;
            }
        }
        cout<<ans<<"\n";
        
    }
}

int main(){
    fastIO();
    solve();
    return 0;
}