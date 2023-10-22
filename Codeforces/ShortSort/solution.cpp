#include <bits/stdc++.h>

using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--){
        string cards;
        cin>>cards;
        if(cards=="abc"){
            cout<<"YES\n";
        } else {
            if(cards[1]=='b'){
                cout<<"YES\n";
            } else if (cards[2]=='c'){
                cout<<"YES\n";
            } else if(cards[0]=='a'){
                cout<<"YES\n";   
            } else{
                cout<<"NO\n";
            }
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