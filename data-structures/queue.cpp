#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

class Queue{
	private:
		vector<int> data;
		int p_start;
	public:
		Queue() { p_start=0; }
		bool enQueue(int value){
			data.push_back(value);
			return true;
		}
		bool deQueue(){
			if(isEmpty()){
				return false;
			}
			p_start++;
			return true;
		}
		int front(){
			return data[p_start];
		}
		bool isEmpty(){
			return p_start>=data.size();
		}
};

int main(){
	Queue q;
	q.enQueue(5);
	q.enQueue(6);
	cout<<q.front();
	q.deQueue();
	cout<<q.front();
	return 0;
}
