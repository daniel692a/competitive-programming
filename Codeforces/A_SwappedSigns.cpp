// time-limit: 1000
// problem-url: https://codeforces.com/gym/104217/problem/A

#include <bits/stdc++.h>
#include <ios>
#include <string>

using namespace std;

void solve(){
    string initial, end;
    cin>>initial>>end;
    int answer = 0;
    for (int i=0; i<initial.size(); i++) {
        if(initial[i]!=end[i]){
            answer++;
        }
    }
    cout<<answer<<"\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}