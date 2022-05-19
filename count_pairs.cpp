#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
	int n=0, pairs = 0;
	cin>>n;
	vector<int> arr(n);
	stack<int> stack;
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}
	stack.push(arr[0]);
	for (int i=1; i<n; i++) {
		if (stack.empty() == true) {
			stack.push(arr[i]);
		} else if (stack.top()==arr[i]) {
			pairs++;
			stack.pop();
		} else {
			stack.push(arr[i]);
		}
	}
	cout<<pairs<<"\n";
	return 0;

}
