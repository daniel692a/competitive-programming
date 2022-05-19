#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	int n, k;
	cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++) {
		cin>>a[i];
	}
	cin>>k;
	for (int i=0; i<n; i++) {
		if(i==n-1){
			if (a[i]%k==0) {
				cout<<a[i];
			} else {
				cout<<"X";
			}
		} else{
			if (a[i]%k==0) {
				cout<<a[i]<<" ";
			} else {
				cout<<"X"<<" ";
			}
		}
	}
	return 0;
}
