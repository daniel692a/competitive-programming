// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/248/A
#include <bits/stdc++.h>
#include <ios>

using namespace std;

void solve(){
    int n;
    cin>>n;
    int answer = 0;
    int cntOpenLeft = 0, cntCloseLeft = 0;
    int cntOpenRight = 0, cntCloseRight = 0;
    while (n--) {
        int left, right;
        cin>>left>>right;
        (left)?cntOpenLeft++:cntCloseLeft++;
        (right)?cntOpenRight++:cntCloseRight++;
    }
    answer += (cntOpenRight<=cntCloseRight)?cntOpenRight:cntCloseRight;
    answer += (cntOpenLeft<=cntCloseLeft)?cntOpenLeft:cntCloseLeft;
    cout<<answer<<"\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}