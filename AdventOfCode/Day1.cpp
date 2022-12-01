#include <bits/stdc++.h>
#include <fstream>

using namespace std;

void solve(){
    string num;
    ifstream myFile("./input.txt");
    long long int max_calories = -1;
    long long int current_elve_calories=0;
    int calories = 0;
    // question 2
    vector<int> topCalories;

    while(getline(myFile, num)){
        if (num==""){
            max_calories = max(max_calories, current_elve_calories);
            topCalories.push_back(current_elve_calories);
            current_elve_calories = 0;
        }else{
            calories = stoi(num);
            current_elve_calories += calories;
        }
    }
    sort(topCalories.begin(), topCalories.end());
    cout<<max_calories<<"\n";
    int size = topCalories.size();
    cout<<topCalories[size-1]+topCalories[size-2]+topCalories[size-3];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}