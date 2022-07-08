// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/275/A
#include <bits/stdc++.h>
#include <vector>

using namespace std;

bool evenOrOdd(int value){
	return (value%2==0)?true:false;
}

int main(){
	int ligths[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
	int directions[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
	int taps = 0;
	for (int row=0; row<3; row++) {
		for (int col = 0; col<3; col++) {
			cin>>taps;
			bool isEven = evenOrOdd(taps);
			if(!isEven){
				int currentLight = ligths[row][col];
				ligths[row][col] = (currentLight == 1) ? 0 : 1;
				for (int i=0; i<4; i++) {
					int x = directions[i][0], y = directions[i][1];
					if(x+row>=0 && x+row<3 && y+col>=0 && y+col<3){
						currentLight = ligths[x+row][y+col];
						ligths[x+row][y+col] = (currentLight==1)?0:1;
					}
				}
			}
		}
	}
	for (int x = 0; x<3; x++) {
		for (int y=0; y<3; y++) {
			cout<<ligths[x][y];
		}
		cout<<endl;
	}
	return 0;
}
