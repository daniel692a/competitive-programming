// time-limit: 2000
// problem-url: https://codeforces.com/contest/1547/problem/C
#include <bits/stdc++.h>

using namespace std;

void solve(){
	int t;
	cin>>t;
	while (t--) {
        int k, n, m;
        cin>>k>>n>>m;
		vector<int> a(n);
        vector<int> b(m);
		
        for(int i=0; i<n; i++){
			cin>>a[i];
		}

        for(int i=0; i<m; i++){
			cin>>b[i];
		}
		
		int i = 0;
        int j = 0;
        vector<int> res;
		bool itsPossible = true;

		while (i!=n or j!=m) {
            if(i!=n and a[i]==0){
                res.push_back(0);
                k++;
                i++;
            } else if(j!=m and b[j]==0){
                res.push_back(0);
                k++;
                j++;
            } else if (i != n and a[i] <= k) {
                res.push_back(a[i++]);
            } else if (j != m && b[j] <= k) {
                res.push_back(b[j++]);
            } else {
                cout << -1 << '\n';
                itsPossible = false;
                break;
            }
        }

		if(itsPossible){
			for (int item: res)
				cout<<item<<" ";
			cout<<"\n";
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
