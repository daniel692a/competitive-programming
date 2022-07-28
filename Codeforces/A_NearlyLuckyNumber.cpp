// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/110/A
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
	string num;
	cin>>num;
	int count_lucky = 0;
	for (int i=0; i<num.size(); i++) {
		if(num[i]=='4' or num[i]=='7'){
			count_lucky++;
		}
	}
	string lucky_c = to_string(count_lucky);
	bool is_nearly_lucky = true;
	for(int i=0; i<lucky_c.size(); i++){
		if(lucky_c[i]!='4' and lucky_c[i]!='7'){
			is_nearly_lucky = false;
			break;
		}
	}
	cout<<((is_nearly_lucky)?"YES":"NO");
	return 0;
}
