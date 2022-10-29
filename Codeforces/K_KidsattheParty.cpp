// time-limit: 1000
// problem-url: https://codeforces.com/gym/103274/problem/K
#include <bits/stdc++.h>

using namespace std;

void solve(){
	int t;
	cin>>t;
	while (t--) {
		string biscuits, answer="";
		cin>>biscuits;

		int len = biscuits.size();

		bool divided = false, by3 = false, by2 = false;

		//2
		if((biscuits[len-1]-48)%2==0){
			by2=true;
			divided=true;
			answer+="2 ";
		}

		//3
		int sum3 = 0;
		for (int i = 0; i < len; i++){
			sum3+=(biscuits[i]-48);
		}
		if(sum3%3==0){
			by3=true;
			divided=true;
			answer+="3 ";
		}

		//4
		if((((biscuits[len-2]-48)*10 )+(biscuits[len-1]-48))%4==0){
			divided=true;
			answer+="4 ";
		}

		//5
		if ((biscuits[len - 1] == '0') or (biscuits[len - 1] == '5')){
			divided = true;
			answer += "5 ";
		}

		//6
		if(by2 and by3){
			answer+="6 ";
		}

		//print
		if(!divided){
			cout<<"-1";
		} else {
			for (int i = 0; i < answer.size()-1; i++){
				cout<<answer[i];
			}
		}
		cout<<"\n";
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
