// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/116/A
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int min_capacity = 0, a = 0, b = 0, i=1, current = 0;
	while (i<=n) {
		cin>>a>>b;
		current-=a;
		current+=b;
		min_capacity = max(min_capacity, current);
		i++;
	}
	cout<<min_capacity;
	return 0;
}
