// time-limit: 1000
// problem-url: https://codeforces.com/contest/1926/problem/B
#include <bits/stdc++.h>

using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<char>> grid(n, vector<char>(n));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin>>grid[i][j];
            }
        }
        string ans="";
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if(grid[i][j]=='1'){
                    int cntdown = 1;
                    for (int k = i+1; k < n; k++){
                        if(grid[k][j]=='1'){
                            cntdown++;
                        } else {
                            break;
                        }
                    }
                    int cntright = 1;
                    for (int f = j+1; f < n; f++){
                        if(grid[i][f]=='1'){
                            cntright++;
                        } else {
                            break;
                        }
                    }
                    if(cntdown==cntright){
                        ans="SQUARE";
                    } else {
                        ans = "TRIANGLE";
                    }
                    break;
                }
            }
            if(ans!=""){
                break;
            }
        }
        cout<<ans<<"\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}