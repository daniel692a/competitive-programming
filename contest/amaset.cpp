#include<bits/stdc++.h>
using namespace std;

int max_days(vector<long long int> days){
	int max_days = 1, gain_days = 1;
	for(int i = 1; i<days.size(); i++){
		if(days[i]>=days[i-1]){
			gain_days++;
			if(gain_days>max_days){
				max_days=gain_days;
			}
		}else{
			gain_days = 1;
		}
	}
	return max_days;
}
int main(){
	int n;
	cin>>n;
	vector<long long int>days(n);
	for(int i = 0; i < n; i++){
   		cin >> days[i];
   	}
	cout << max_days(days)<<endl;
	return 0;
}
