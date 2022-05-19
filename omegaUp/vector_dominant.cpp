#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int check_dominant(vector<int> a, vector<int> b){
	for (int i=0; i<a.size(); i++) {
		if (b[i]>=a[i]) {
			return 0;
		}
	}
	return 1;
}

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	vector<int> b(n);
	for (int i=0; i<n; i++) {
		cin>>a[i];
	}
	for (int i=0; i<n; i++) {
		cin>>b[i];
	}
	cout<<check_dominant(a, b);
	return 0;
}
