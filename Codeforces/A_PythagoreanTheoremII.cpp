// time-limit: 3000
// problem-url: https://codeforces.com/contest/304/problem/A
#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n;
    int cnt = 0;
    for (int  a = 1; a <= n; a++){
        for (int b = 1; b <=a ; b++){
            float c = (a*a) + (b*b);
            c = sqrt(c);
            if(c>n) break;
            if(c <= int(c)) cnt++;
        }
    }
    cout<<cnt<<"\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
