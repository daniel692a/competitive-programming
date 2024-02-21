// time-limit: 1000
// problem-url: https://codeforces.com/contest/1759/problem/C
#include <bits/stdc++.h>

using namespace std;

void solve(){
    int t; 
    cin>>t;
    while(t--){
        int l, r, x, a, b;
        cin>>l>>r>>x>>a>>b;
        if(a==b){
            cout<<"0\n";
        } else if((abs(b-l)<x and abs(b-r)<x) or((a+x)>r and (a-x)<l)){
            cout<<"-1\n";
        } else if(abs(b-a)>=x or x==1){
            cout<<"1\n";
        } else if((a>b) and ((a+x)<=r or (b-x)>=l)){
            cout<<"2\n";
        } else if((b>a) and ((b+x)<=r or (a-x)>=l)){
            cout<<"2\n";
        } else {
            cout<<"3\n";
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