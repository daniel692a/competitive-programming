// time-limit: 300
// problem-url: https://codeforces.com/gym/104555/problem/M
#include <bits/stdc++.h>

using namespace std;

void floyd_wharshall(vector<vector<int>> &d, vector<vector<int>> &up, int n){
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if(k==i||k==j) continue;
                if( d[i][j] >= d[i][k] + d[k][j] ){
                    d[i][j] = d[i][k] + d[k][j];
                    up[i][j]=1;
                }
            }
        }
    }
}

int check(vector<vector<int>> &d, vector<vector<int>> &floyd, vector<vector<int>> &up, int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(d[i][j]!=floyd[i][j]){
                return -1;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if(up[i][j]==1){
                cnt++;
            }
        }
    }
    return cnt;
}

void solve(){
    int n; cin>>n;
    vector<vector<int>> f;
    f.resize(n, vector<int>(n));
    vector<vector<int>> floyd;
    floyd.resize(n, vector<int>(n));
    vector<vector<int>> up;
    up.resize(n, vector<int>(n));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>f[i][j];
            floyd[i][j] = f[i][j];
        }    
    }

    floyd_wharshall(floyd, up, n);
    int r = check(f, floyd, up, n);
    cout<<r<<"\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}