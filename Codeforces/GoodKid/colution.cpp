#include <bits/stdc++.h>

using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int has_zero = -1;
        int minv = a[0];
        for(int i=0; i<n; i++){
            minv = min(minv, a[i]);

            if(a[i] == 0){
                has_zero = i;
            }
        }
        int times = 0;
        if(has_zero>0){
            a[has_zero] = 1;
            times = 1;
        }
        int product = 1;
        for(int i=0; i<n; i++){
            if(a[i] == minv && times==0){
                a[i]++;
                times++;
            }
            product *= a[i];
        }
        cout<<product<<"\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}