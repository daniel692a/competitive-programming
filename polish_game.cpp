#include <bits/stdc++.h>

using namespace std;

bool can_win(int stones){
	if(stones%2==1){
		return false;
	}
	return !can_win(stones/2);
}

int main(){
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		int stones = 0;
		cin>>stones;
		bool result = can_win(stones);
		(result)?cout<<"TAK\n":cout<<"NIE\n";
	}
	return 0;
}
