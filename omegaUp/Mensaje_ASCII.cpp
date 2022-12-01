#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve(){
    string line;
    string answer = "";
    getline(cin>>ws, line);
    stringstream ss(line);
    string word;
    while (ss >> word){
        int ascii_code = stoi(word);
        char val = ascii_code;
        answer+=val;
    }
    cout<<answer<<"\n";
}

int main(){
    solve();
    return 0;
}