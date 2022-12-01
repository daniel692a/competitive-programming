#include <bits/stdc++.h>
#include <vector>

using namespace std;

void solve(){
	vector<int> tab(3);
	vector<int> cofre(3);
	for (int i=0; i<6; i++) {
		if(i>2){
			cin>>cofre[i-3];
		} else {
			cin>>tab[i];
		}
	}
	sort(tab.begin(), tab.end());
	sort(cofre.begin(), cofre.end());
	bool posible = true;
	for (int i=0; i<3; i++) {
		if(cofre[i]<tab[i]){
			posible=false;
			break;
		}
	}
	cout<<(posible?1:0);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
