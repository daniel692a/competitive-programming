// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/80/A
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(){
	int n, m;
	cin>>n>>m;
	int tempPrime=n;
	for (int i=n+1; i<50; i++) {
		bool isPrime = true;
		// check if is a prime number
		for(int j=2; j<=sqrt(i); j++){
			if(i%j==0){
				isPrime=false;
				break;
			}
		}
		if(isPrime){
			tempPrime=i;
			break;
		}
	}
	cout<<((tempPrime==m)?"YES":"NO");
	return 0;
}
