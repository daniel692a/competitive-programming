#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
	int n, funny_level, min_value=100, max_funny=0;
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>funny_level;
		min_value = min(min_value, funny_level);
		max_funny += funny_level;
	}
	cout<<max_funny-min_value;
	return 0;
}
