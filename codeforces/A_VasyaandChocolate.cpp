// time-limit: 1000
// problem-url: https://codeforces.com/contest/1065/problem/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, i=0;
	long long int money=0, to_buy=0, get_free=0, cost_bar=0;
	cin>>t;
	while(i<t){
		cin>>money>>to_buy>>get_free>>cost_bar;
		long long int bougth = money/cost_bar;
		long long int add_free = (bougth/to_buy);
		cout<<(bougth+(add_free)*get_free)<<"\n";
		i++;
	}
	return 0;
}
