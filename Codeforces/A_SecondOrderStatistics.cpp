// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/22/A
#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> products(n);
	set<int> prices;
	for (int i=0; i<n; i++) {
		cin>>products[i];
		prices.insert(products[i]);
	}
	if(prices.size()>=2){
		cout<<*++prices.begin();
	} else {
		cout<<"NO";
	}
	return 0;
}
