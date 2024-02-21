// time-limit: 2000
// problem-url: https://codeforces.com/contest/977/problem/E
#include <bits/stdc++.h>

using namespace std;

#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void DFS(vector<vector<int>> &adj, int root, vector<bool> &vis, bool &c){
    vis[root] = true;
        if (adj[root].size()!=2) {
            c = false;
        }
    for (int i = 0; i < adj[root].size(); i++){
        int node = adj[root][i];
        if(!vis[node]){
            DFS(adj, node, vis, c);
        }
    }
}

void solve(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    vector<bool> vis(n, false);
    bool cyc = true;
    int cnt=0;
    for (int i = 0; i < m; i++){
        int u, v;
        cin>>u>>v;
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }
    for (int i = 0; i < n; i++){
        if(!vis[i]){
            DFS(adj, i, vis, cyc);
            if(cyc) cnt++;
        }
        cyc=true;
    }
    cout<<cnt<<"\n";
}

int main(){
    fastIO();
    solve();
    return 0;
}