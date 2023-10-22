#include <bits/stdc++.h>

using namespace std;

#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

vector<int> dr = { -1, 0, 1, 0};
vector<int> dc = { 0, 1, 0, -1};

bool isValid(vector<vector<bool>> &vis, int row, int col){
    if ((row < 0) || (col < 0) || (row >= vis.size()) || (col >= vis[0].size())){
        return false;
    }
    if (vis[row][col]==true){
        return false;
    }
    return true;
}

void bfs(int i, int j, vector<vector<bool>> &vis, vector<vector<char>> &b){
        queue<pair<int, int>> q;
        q.push({i, j});
        vis[i][j] = true;
        while(!q.empty()){
            pair<int, int> cell = q.front();
            int x = cell.first;
            int y = cell.second;
            q.pop();
            for (int i = 0; i < 4; i++) {
                int adjx = x + dr[i];
                int adjy = y + dc[i];
                if(isValid(vis, adjx, adjy) and b[adjx][adjy]=='.') {
                    q.push({ adjx, adjy });
                    vis[adjx][adjy] = true;
                }
            }
        }
}

void solve(){
    int n, m;
    cin>>n>>m;
    vector<vector<char>> b;
    b.resize(n, vector<char> (m));
    vector<vector<bool>> vis;
    vis.resize(n, vector<bool>(m));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>b[i][j];
            vis[i][j] = false;
        }
    }
    int rooms = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(b[i][j]=='.' and vis[i][j]==false){
                bfs(i, j, vis, b);
                rooms++;
            }
        }
    }
    cout<<rooms<<"\n";
}

int main(){
    fastIO();
    solve();
    return 0;
}