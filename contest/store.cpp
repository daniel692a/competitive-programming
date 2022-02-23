#include <bits/stdc++.h>

using namespace std;

int max_gain_days(vector<long long int> g){
    int max_gain_days = 0, gain_days=1;
    for (int i = 1; i < g.size(); i++)
    {
        if(g[i]>=g[i-1]){
            gain_days++;
        }
        else{
            if(gain_days>max_gain_days){
                max_gain_days = gain_days;
            }
            gain_days = 1;
        }
	    if(i==(g.size()-1)){
		    if(gain_days>max_gain_days){
			max_gain_days = gain_days;
		    }
	    }
    }
    return max_gain_days;
}

int main(){
    int n;
    cin>>n;
    vector<long long int> days(n);
    for(int i = 0; i<n; i++){
        cin>>days[i];
    }
    cout<<max_gain_days(days)<<endl;
    return 0;
}
