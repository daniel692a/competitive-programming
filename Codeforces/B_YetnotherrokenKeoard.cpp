// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1907/B
#include <bits/stdc++.h>

using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<int> upper;
        stack<int> lower;
        unordered_set<int> deleted;
        for(int i=0; i<s.size(); i++){
            if(s[i]!='b' and islower(s[i])){
                lower.push(i);
            } else if(s[i]!='B' and isupper(s[i])){
                upper.push(i);
            }

            if(s[i]=='b' and !lower.empty()){
                deleted.insert(lower.top());
                lower.pop();
            } else if(s[i]=='B' and !upper.empty()){
                deleted.insert(upper.top());
                upper.pop();
            }
            if(s[i]=='b' or s[i]=='B'){
                deleted.insert(i);
            }
        }
        for (int i = 0; i < s.size(); i++){
            if(!deleted.count(i)){
                cout<<s[i];
            }
        }
        cout<<"\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
