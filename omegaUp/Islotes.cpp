#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin>>s;
    int counter = 0;
    for(int i=1; i<s.size()-1; i++){
        if((s[i-1]==s[i+1]) and (s[i-1]!=s[i])){
            counter++;
        }
    }
    cout<<counter<<"\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}