#include <array>
#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <queue>
#include <string>

using namespace std;

void solve(){
	queue<string> employees;
	queue<string> students;
	int n, i=0;
	string num;
	getline(cin, num);
	n = stoi(num);
	while (i<n) {
		string instruction;
		getline(cin, instruction);
		if(instruction[0]=='L'){
			string name = "";
			if(instruction[6]=='A'){
				name = instruction.substr(13, instruction.size());
				students.push(name);
			} else {
				name = instruction.substr(17, instruction.size());
				employees.push(name);
			}
			
		} else {
			if(!employees.empty()){
				cout<<employees.front()<<"\n";
				employees.pop();
			} else {
				cout<<students.front()<<"\n";
				students.pop();
			}
		}
		i++;
	}
}

int main(){
	solve();
	return 0;
}
