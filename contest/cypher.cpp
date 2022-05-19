#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
	int t, i, j;
	cin>>t;
	while (t!=0) {
		cin>>i>>j;
		vector<int> primes;
		for (int s = j; j>=i; j--) {
			for (int d=2; d<s; s++) {
				if (s%d==0) {
					break;
				}
			}
			primes.push_back(s);
		}
		cout<<primes.size()<<"\n";
		t--;	
	}
	return 0;
}
