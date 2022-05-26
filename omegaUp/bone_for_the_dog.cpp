#include <bits/stdc++.h>

using namespace std;

int main(){
    int l1, t1, l2, t2;
    cin>>l1>>t1>>l2>>t2;
    if (l1>l2 and t1>t2){
        cout<<"Hueso 1";
    }else if(l2>l1 and t2>t1){
        cout<<"Hueso 2";
    } else{
        cout<<"Perrito confundido :(";
    }
    return 0;
}