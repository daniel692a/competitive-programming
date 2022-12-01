#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin>>s;
    char search;
    cin>>search;
    int count = 0;
    for(auto c:s){
        if(c==search){
            count++;
        }
    }
    cout<<count<<"\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}