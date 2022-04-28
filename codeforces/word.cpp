// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/59/A
//
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <type_traits>

using namespace std;


/*void all_lower(string *word){
	for (int i=0; i<word->length(); i++) {
		word[i] = tolower(word[i]);
	}
	cout<<word;
}*/

int main(){
	string word;
	cin>>word;
	int countUpper = 0, countLower = 0;
	for(int i=0; i<word.length(); i++){
		if(isupper(word[i])){
			countUpper++;
		} else {
			countLower++;
		}
	}
	if (countUpper>countLower) {
		transform(word.begin(), word.end(), word.begin(), ::toupper);
		cout<<word;
	} else if (countLower>=countUpper) {
		transform(word.begin(), word.end(), word.begin(), ::tolower);
		cout<<word;
	}

	return 0;
}
