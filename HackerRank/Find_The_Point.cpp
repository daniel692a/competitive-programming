# include <bits/stdc++.h>

using namespace std;
//O(1)
vector<int> findPoint(int px, int py, int qx, int qy) {
    vector<int> r(2);
    r[0] = (qx-px)+qx;
    r[1] = (qy-py)+qy;
    return r;
}