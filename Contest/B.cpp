#include <bits/stdc++.h>

using namespace std;

void solve(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        unordered_map<char, int> chars;
        string ans="";
        for(char c = 'a'; c<='z'; c++){
            chars[c] = 0;
        }
        vector<int> a(n);
        for(auto &it: a)
            cin>>it;

        for(int i = 0; i<n; i++){
            int nch = a[i];
            char newc;
            for(auto p:chars){
                if(p.second==nch){
                    newc=p.first;
                    break;
                }
            }
            ans += newc;
            chars[newc]++;
        }
        cout<<ans<<"\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}