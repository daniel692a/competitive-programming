// time-limit: 1000
// problem-url: https://codeforces.com/gym/104752/problem/B
#include <bits/stdc++.h>

using namespace std;
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int c0, c1, m0, m1;
    cin>>c0>>c1>>m0>>m1;
    int max=c0+c1;
    int allow = m0+m1;
    if(max==0 or allow==0) cout<<"-1\n";
    else if(max<allow) cout<<max<<"\n";
    else if(max==allow) cout<<max<<"\n";
    else if(allow<max) cout<<allow<<"\n";
}

int main(){
    fastIo();
    solve();
    return 0;
}