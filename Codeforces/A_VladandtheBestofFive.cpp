// time-limit: 1000
// problem-url: https://codeforces.com/contest/1926/problem/0
#include <bits/stdc++.h>

using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--){
        string abss;
        cin>>abss;
        int cnta = 0, cntb=0;
        for (int i = 0; i < 5; i++){
            if(abss[i]=='A') cnta++;
            if(abss[i]=='B') cntb++;
        }
        if(cnta>cntb){
            cout<<"A\n";
        } else {
            cout<<"B\n";
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
