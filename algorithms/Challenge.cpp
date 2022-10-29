#include <bits/stdc++.h>

using namespace std;

int main(){
    // fastIO
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string input = "";
    cin>>input;

    char current = input[0];
    int count = 1;
    // O(n)
    for (int i = 1; i < input.size(); i++){
        if(input[i]!=current){
            cout<<count<<current;
            current=input[i];
            count=1;
        } else {
            count++;
        }
    }
    if(current!=input.size()-1){
        cout<<count<<current;
    }
    return 0;
}