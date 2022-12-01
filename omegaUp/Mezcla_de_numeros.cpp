#include <bits/stdc++.h>
#include <vector>

using namespace std;

void solve(){
	int n, m;
	cin>>n>>m;
	vector<int> stack1(n), stack2(m);
	int j=0;
	for (int i=0; i<n+m; i++) {
		if(i<n){
			cin>>stack1[i];
		} else {
			cin>>stack2[j];
			j++;
		}
	}
	vector<int> merge(n+m);
	int pointer1 = 0, pointer2 = 0;
	int pointerMerge = 0;
	while(pointer1<n && pointer2<m){
		if(stack1[pointer1]<stack2[pointer2]){
			merge[pointerMerge] = stack1[pointer1];
			pointer1++;
			pointerMerge++;
		} else {
			merge[pointerMerge] = stack2[pointer2];
			pointer2++;
			pointerMerge++;
		}
	}
	while(pointer1<n){
		merge[pointerMerge] = stack1[pointer1];
		pointer1++;
		pointerMerge++;
	}
	while(pointer2<m){
		merge[pointerMerge] = stack2[pointer2];
		pointer2++;
		pointerMerge++;
	}
	for(auto c: merge){
		cout<<c<<" ";
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
