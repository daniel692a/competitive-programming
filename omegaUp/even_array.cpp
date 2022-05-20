#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin>>n;
	vector<int> numbers(n);
	for (int i=0; i<n; i++) {
		cin>>numbers[i];
	}
	cin>>k;
	for (int i=0; i<n; i++) {
		if(numbers[i]%2==k){
			cout<<numbers[i]<<" ";
		}
	}
	return 0;
}
