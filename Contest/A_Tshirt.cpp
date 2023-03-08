#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

void solve(){
    int a, b, c, x;
    cin>>a>>b>>c>>x;
    double answer;
    if(x>=1 and x<=a){
        answer = 1.000;
    } else if (x>=(a+1) and x<=b) {
        int temp = b-a;
        answer = double(c)/double(temp);
    } else {
        answer = 0.000;
    }
    cout<<fixed;
    cout << std::setprecision(12);
    cout<<answer<<"\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}