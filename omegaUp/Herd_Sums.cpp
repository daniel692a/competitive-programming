#include <bits/stdc++.h>

using namespace std;

int sum_gauss(int n){
	int sum = ((n*(n+1))/2);
	return sum;
}

int herd_sum(int n){
	int r=1, l=1, counter=1;
	int lim = (counter/2)+1;
	int pref_sum = 0;
	while (r!=n) {
		pref_sum = sum_gauss(r)-sum_gauss(l-1);
		if(pref_sum==n){
			counter+=1;
			r++;
		} else if (pref_sum<n) {
			r++;
		} else {
			l++;
		}
	}
	return counter;
}

int main(){
	int n;
	cin>>n;
	cout<<herd_sum(n);
}
