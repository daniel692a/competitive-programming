// time-limit: 1000
// problem-url: https://codeforces.com/contest/1065/problem/A
#include <bits/stdc++.h>

using namespace std;

// void max_chocolates(long int money, long int to_buy, long int get_free, long int cost_bar){
// 	long int bougth = money/cost_bar;
// 	long int add_free = (bougth/to_buy);
// 	cout<<(bougth+(add_free)*get_free)<<"\n";
// }

int main(){
	int t, i=0;
	long int money=0, to_buy=0, get_free=0, cost_bar=0;
	vector<long int> results;
	cin>>t;
	while(i<t){
		cin>>money>>to_buy>>get_free>>cost_bar;
		long int bougth = money/cost_bar;
		long int add_free = (bougth/to_buy);
		results.push_back(bougth+(add_free)*get_free);
		i++;
	}
	for(auto result: results){
		cout<<result<<"\n";
	}
	return 0;
}
