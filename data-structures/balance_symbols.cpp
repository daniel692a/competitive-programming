#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main(){
	string sym;
	cin>>sym;
	stack<char> symbols;
	bool isValid = false;
	for(int i=0; i<sym.length(); i++){
		if(sym[i]==40 or sym[i]==91 or sym[i]==123){
			symbols.push(sym[i]);
		} else if(!symbols.empty()){
			if(sym[i]==41 and symbols.top()==40){
				symbols.pop();
			} else if (sym[i]==93 and symbols.top()==91) {
				symbols.pop();
			} else if (sym[i]==123 and symbols.top()==121) {
				symbols.pop();
			}
		}
	}
	if (symbols.empty()) {
		cout<<"It's valid";
	} else{
		cout<<"Not valid";
	}
	return 0;
}
