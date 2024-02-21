#include <bits/stdc++.h>

using namespace std;

void solve(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        string strip;
        cin>>strip;
        int l=0, r=n-1;
        for(int i=0; i<n; i++){
            if(strip[i]=='B'){
                l=i;
                break;
            }
        }
        for(int i=n-1; i>-1; i--){
            if(strip[i]=='B'){
                r=i;
                break;
            }
        }
        if(l==r){
            cout<<"1\n";
        } else {
            cout<<(r-l)+1<<"\n";
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