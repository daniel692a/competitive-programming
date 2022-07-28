#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    float m;
    cin >> n >> m;
    int loop=-1, c, child, index=0;
    for(int i=0; i<n; i++){
        cin>>child;
        c = ceil(child/m);
        if(loop<=c){
            loop = c;
            index = i+1;
        }
    }
    cout<<index<<endl; 
    return 0;
}