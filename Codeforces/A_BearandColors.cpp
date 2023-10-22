// time-limit: 2000
// problem-url: https://codeforces.com/contest/643/problem/A
#include <bits/stdc++.h>

using namespace std;

#define fastIO(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;
    cin>>n;
    vector<int> colors(n);

    for(auto &c: colors)
        cin>>c;

    map<int, int> ans;
    unordered_map<int, int> v;
    map<int, int, greater<int>> o;

    for (int i = 0; i < n; i++){
        for(int j=i; j < n; j++){   
            v[colors[j]] +=1;
            int oc = v[colors[j]];
            if(!o[oc]){
                o[oc] = colors[j];
            } else {
                o[oc] = min(o[oc], colors[j]);
            }
            int dom = o.begin()->second;
            ans[dom]++;
        }
        v.clear();
        o.clear();
    }
    for(int i=1; i<=n; i++){
        if(!ans[i]){
            cout<<"0 ";
        } else{
            cout<<ans[i]<<" ";
        }
    }
    cout<<"\n";
}

int main(){
    fastIO();
    solve();
    return 0;
}