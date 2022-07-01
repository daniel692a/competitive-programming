#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, target;
    cin>>n;
    cin>>target;

    vector<int> nums(n);

    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int i=0, j=n-1;

    while (i<j){
        if(nums[i]+nums[j]==target){
            cout<<nums[i]<<" + "<<nums[j]<<"= "<<target;
            break;
        }

        if(nums[i]+nums[j]>target) {
            j--;
        }
        if(nums[i]+nums[j]<target) {
            i++;
        }
    }
    return 0;
}