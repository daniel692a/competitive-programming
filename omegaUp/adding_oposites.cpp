#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++){
        cin>>nums[i];
    }
    int i=0, j=n-1;
    while(i<=j){
        cout<<nums[i]+nums[j]<<" ";
        i++;
        j--;
    }
    return 0;
}