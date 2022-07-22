// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1/A
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
	double n, m, a;
	cin>>n>>m>>a;
	unsigned long long int result = ceil(n/a)*ceil(m/a);
	cout<<result;
	return 0;
}
