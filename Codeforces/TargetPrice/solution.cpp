#include <bits/stdc++.h>

using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--){
        int target[10][10];
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                if(j==0 or i==0 or j==9 or i==9){
                    target[i][j]=1;
                }
                if((i==1 and (j>0 and j<9)) or (i==8 and (j>0 and j<9)) or (j==1 and (i>0 and i<9)) or (j==8 and (i>0 and i<9))){
                    target[i][j]=2;
                }
                if((i==2 and (j>1 and j<8)) or (i==7 and (j>1 and j<8)) or (j==2 and (i>1 and i<8)) or (j==7 and (i>1 and i<8))){
                    target[i][j]=3;
                }
                if((i==3 and (j>2 and j<7)) or (i==6 and (j>2 and j<7)) or (j==3 and (i>2 and i<7)) or (j==6 and (i>2 and i<7))){
                    target[i][j]=4;
                }
                if((i==4 and (j>3 and j<6)) or (i==5 and (j>3 and j<6)) or (j==4 and (i>3 and i<6)) or (j==5 and (i>3 and i<6))){
                    target[i][j]=5;
                }
            }
        }
        char inp;
        int score = 0;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                cin>>inp;
                if(inp=='X'){
                    score+=target[i][j];
                }
            }
        }
        cout<<score<<"\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}