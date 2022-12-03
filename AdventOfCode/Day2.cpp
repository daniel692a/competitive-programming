#include <bits/stdc++.h>
#include <fstream>

using namespace std;

void solve(){
    ifstream myFile("./input2.txt");
    string line;
    long long int score = 0;
    unordered_map<char, int> shapes;
    shapes['X'] = 1;
    shapes['Y'] = 2;
    shapes['Z'] = 3;
    // Part 1
    // while (getline(myFile, line)){
    //     char play1;
    //     char play2;
    //     for (int i = 0; i < line.size(); i++){
    //         if(i==0)
    //             play1=line[i];
    //         if(i==2)
    //             play2=line[i];
    //     }
    //     if(play1=='A' && play2 =='Y'){
    //         score += 6;
    //     } else if(play1=='B' && play2 =='Z'){
    //         score += 6;
    //     } else if (play1=='C' && play2 =='X'){
    //         score+=6;
    //     } else if(play1== 'A' && play2=='X'){
    //         score+=3;
    //     } else if(play1== 'B' && play2=='Y'){
    //         score+=3;
    //     } else if(play1== 'C' && play2=='Z'){
    //         score+=3;
    //     } else {
    //         score+=0;
    //     }
    //     score+=shapes[play2];
    // }
    // part 2
    unordered_map<char, int> game_points;
    game_points['X'] = 0;
    game_points['Y'] = 3;
    game_points['Z'] = 6;
    unordered_map<char, char> how_to_win;
    how_to_win['A'] = 'Y';
    how_to_win['B'] = 'Z';
    how_to_win['C'] = 'X';
    unordered_map<char, char> how_to_draw;
    how_to_draw['A'] = 'X';
    how_to_draw['B'] = 'Y';
    how_to_draw['C'] = 'Z';
    unordered_map<char, char> how_to_lose;
    how_to_lose['A'] = 'Z';
    how_to_lose['B'] = 'X';
    how_to_lose['C'] = 'Y';
    int score2 = 0;
    while (getline(myFile, line)){
        char play1;
        char play2;
        for (int i = 0; i < line.size(); i++){
            if(i==0)
                play1=line[i];
            if(i==2)
                play2=line[i];
        }
        if(play2=='X'){
            score2 += 0;
            score2 += shapes[how_to_lose[play1]];
        } else if(play2=='Y'){
            score2 += 3;
            score2 += shapes[how_to_draw[play1]];
        } else {
            score2 += 6;
            score2 += shapes[how_to_win[play1]];
        }
    }

    cout<<score<<"\n";
    cout<<score2<<"\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}