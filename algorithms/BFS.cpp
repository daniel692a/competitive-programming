#include <bits/stdc++.h>

using namespace std;

class Node{
    private:
    int value;
    vector<int> neighbors;
    public:
    Node(int value, vector<int> neighbors){
        this->value=value;
        this->neighbors=neighbors;
    }
    int getValue(){
        return this->value;
    }
    vector<int> getNeighbors(){
        return this->neighbors;
    }
};
//Search the shortest path
int BFS(Node root, Node target){
    queue<Node> queue;
    set<Node> visited;
    int step = 0;

    //add root to queue
    queue.push(root);
    visited.insert(root);
    //BFS
    while(!queue.empty()){
        int size=queue.size();
        for(int i=0; i<size; i++){
            Node current = queue.front();
            if(current.getValue() == target.getValue()){
                return step;
            }
            for(Node next: current.getNeighbors()){
                if(!(visited.find(next)!=visited.end())){
                    queue.push(next);
                    visited.insert(next);
                }
            }
            queue.pop();
        }
        step+=1;
    }
    return -1;
}

int main(){
    return 0;
}