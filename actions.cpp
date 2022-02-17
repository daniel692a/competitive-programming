#include <bits/stdc++.h>

using namespace std;

int a_good_gain(vector<int> prices){
	// O(n)
	int low_price = prices[0];
	int gain = 0;
	for(int i=0; i<prices.size(); i++){
		int gain_today = prices[i]-low_price;
		low_price = min(low_price, prices[i]);
		gain = max(gain, gain_today);
	}
	return gain;
}

int main(){
	int n;
	cin>>n;
	vector<int> days(n);
	for(int i=0; i<n; i++){
		cin>>days[i];
	}
	int maximum=0;
	// O(n**2)
	for(int buy = 0; buy<n-1; buy++){
		for(int sale=buy+1; sale<n; sale++){
			int gain = days[sale]-days[buy];
			maximum = max(maximum, gain);
		}
	}
	cout<<maximum<<endl;
	cout<<a_good_gain(days)<<endl;
	return 0;
}
