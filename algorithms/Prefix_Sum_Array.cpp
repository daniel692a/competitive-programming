#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
	int n, pF=0;
	cin>>n;
	vector<int> values(n), prefixSum(n);
	for (int i = 0; i<n; i++) {
		cin>>values[i];
		pF += values[i];
		prefixSum[i] = pF;
	}
	prefixSum[0] = 0;

	for (int i=0; i<n; i++) {
		cout<<values[i]<<" "<<prefixSum[i]<<"\n";
	}
	return 0;
}
