#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
	int n, x, y, z, sum_x=0, sum_y=0, sum_z=0;
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>x>>y>>z;
		sum_x+=x, sum_y+=y, sum_z+=z;
	}
	if(sum_x==0 && sum_y==0 && sum_z==0){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
	return 0;
}
