#include <bits/stdc++.h>
using namespace std;

int compare_strings(string, string);

int main(){
    string wordOne, wordTwo;
    cin>>wordOne>>wordTwo;
    cout<<compare_strings(wordOne, wordTwo);
    return 0;
}

int compare_strings(string s1, string s2){
    for(int i=0; i<s1.size(); i++){
        if(tolower(s1[i])!=tolower(s2[i])){
            return tolower(s1[i])<tolower(s2[i])?-1:1;
        }
    }
    return 0;
}