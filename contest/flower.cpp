#include <bits/stdc++.h>

using namespace std;

int final_size(vector<int> days){
    int flower_size = 1;
    for(int i = 0; i < days.size(); i++){
        if(days[i]==1){
            if((i>0) && days[i-1]==1){
                flower_size+=5;
            } else {
                flower_size++;
            }
        } else{
            if(i>0 && days[i-1]==0){
                return -1;
            }
        }
    }
    return flower_size;
}

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++){
        int n;
        cin>>n;
        vector<int> days(n);
        for(int j = 0; j<n; j++){
            cin>>days[j];
        }
        cout<<final_size(days)<<endl;
    }
    return 0;
}