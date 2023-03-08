// time-limit: 1000
// problem-url: https://codeforces.com/gym/104217/problem/B
#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <string>
#include <algorithm>

using namespace std;

void solve(){
    string n;
    cin>>n;
    sort(n.begin(), n.end(), greater<int>());
    int max = stoi(n);
    sort(n.begin(), n.end());
    int min = stoi(n);
    cout<<(max-min)<<"\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}