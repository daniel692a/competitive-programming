#include <bits/stdc++.h>
#include <cmath>
#include <cstdlib>
#include <vector>

using namespace std;

class CircularQueue{
	private:
		int p_start = 0;
		vector<int> data;
	public:
		CircularQueue(int k){
			data.resize(k);
		}
};
