// time-limit: 2000
// problem-url: http://codeforces.com/problemset/problem/32/B
#include <bits/stdc++.h>

using namespace std;

int main(){
    string borze_code;
    cin>>borze_code;
    for (int i = 0; i < borze_code.size(); i++){
        if(borze_code[i]=='-' and borze_code[i+1]=='.'){
            cout<<1;
            i++;
        } else if (borze_code[i]=='-' and borze_code[i+1]=='-'){
            cout<<2;
            i++;
        } else {
            cout<<0;
        }
    }
    return 0;
}