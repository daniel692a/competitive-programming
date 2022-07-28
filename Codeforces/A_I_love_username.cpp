// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/155/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> contests(n);
	for (int i=0; i<n; i++) {
		cin>>contests[i];
	}
	int max_record = contests[0], min_record = contests[0], break_records = 0;
	for (int i=1; i<n; i++) {
		if(contests[i]>max_record){
			max_record = contests[i];
			break_records++;
		} else if (contests[i]<min_record) {
			min_record=contests[i];
			break_records++;
		}
	}
	cout<<break_records;
	return 0;
}

