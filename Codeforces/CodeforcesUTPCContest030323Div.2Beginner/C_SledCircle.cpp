// time-limit: 1000
// problem-url: https://codeforces.com/gym/104217/problem/C
#include <bits/stdc++.h>
#include <ios>
#include <unordered_set>
#include <vector>

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> dogPosition(n);
    vector<int> distance(n);
    int t=0;
    for(int i=0; i<n; i++){
        cin>>distance[i];
        dogPosition[i] = i;
    }
    int p=-1;
    unordered_set<int> pos;
    while(t!=1002){
        for (int i=0; i<n; i++) {
            dogPosition[i] = (dogPosition[i]+distance[i])%n;
            pos.insert(dogPosition[i]);
        }
        t++;
        if(pos.size()==1){
            p = dogPosition[0];
            break;
        }
        pos.clear();
    }
    if(p!=-1){
        cout<<t<<" "<<p<<"\n";
    } else {
        cout<<-1<<" "<<-1<<"\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
