#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin>>s;
    int l = 0, r = s.size()-1;
    int counter = 0;
    while(l<=r){
        char c1 = tolower(s[l]);
        char c2 = tolower(s[r]);
        if(c1==c2){
            if(l!=r)
                counter++;
            counter++;
        }
        l++;
        r--;
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