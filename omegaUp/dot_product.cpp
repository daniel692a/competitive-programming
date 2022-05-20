#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, dot_product=0;
    cin>>n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for (int i = 0; i < n; i++){
        cin>>b[i];
    }
    for (int i = 0; i<n; i++){
        dot_product+=a[i]*b[i];
    }
    cout<<dot_product;
    return 0;
}