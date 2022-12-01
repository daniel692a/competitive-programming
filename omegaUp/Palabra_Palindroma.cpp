#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin>>s;
    int l = 0, r = s.size()-1;
    bool isPalindrome = true;
    while(l<=r){
        char c1 = tolower(s[l]);
        char c2 = tolower(s[r]);
        if(c1!=c2){
            isPalindrome=false;
            break;
        }
        l++;
        r--;
    }
    if(isPalindrome){
        cout<<"SI\n";
    } else{
        cout<<"NO\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}