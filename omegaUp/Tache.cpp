#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, i = 0, j;
	cin>>n;
	j=n-1;
	for (int a=0; a<n; a++) {
		for (int b=0; b<n; b++) {
			if (b==i and b==j){
				cout<<"@";
			} else if(b==i){
				cout<<"@";
			} else if(b==j){
				cout<<"@";
			} else {
				cout<<" ";
			}
		}
		if(a==n-1) break;
		cout<<"\n";
		i++;
		j--;
	}
	return 0;
}
