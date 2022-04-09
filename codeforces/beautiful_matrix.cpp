#include <bits/stdc++.h>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
	int matrix[5][5];
	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
			cin>>matrix[i][j];
		}
	}

	for (int j=0; j<5; j++) {
		for(int i=0; i<5; i++){
			if(matrix[j][i]==1){
				cout<<(abs(j-2)+abs(i-2));
			}
		}
	}

	return 0;
}
