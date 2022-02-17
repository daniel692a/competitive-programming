#include <bits/stdc++.h>

using namespace std;

string can_divide_even(int weight){
	return ((weight-2)%2==0) ? "YES" : "NO"; 
}

int main(){
	int weight = 0;
	cin>> weight;
	cout<<can_divide_even(weight)<<"\n";
	return 0;
}
