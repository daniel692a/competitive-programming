#include <bits/stdc++.h>

using namespace std;

class MyCircularQueue{
	public:
		int head = -1, tail=-1, k;
		vector<int> data;

		MyCircularQueue(int k){
			this->k=k;
			data.resize(k);
		}

		bool enQueue(int value){
			if(isFull()){
				return false;
			} else{
				if(isEmpty()){
					head = 0, tail=0;
					data[tail]=value;
				}else if(tail==k-1){
					tail=0;
					data[tail]=value;
				} else {
					tail++;
					data[tail]=value;
				}
				return true;
			}
		}
		bool deQueue(){
			if(isEmpty()){
				return false;
			} else{
				if(head==tail){
					head=-1, tail=-1;
				} else if(head==k-1){
					head=0;
				} else{
					head++;
				}
				return true;
			}
		}
		int Front(){
			if(head==1){
				return -1;
			} else{
				return data[head];
			}
		}
		int Rear(){
			if(tail==-1){
				return -1;
			} else{
				return data[tail];
			}
		}
		bool isFull(){
			if((head==0 and tail==k-1) or (tail+1==head)){
				return true;
			} else{
				return false;
			}
		}
		bool isEmpty(){
			if(head==-1 and tail==-1){
				return true;
			} else{
				return false;
			}
		}
};


int main(){
	MyCircularQueue *queue = new MyCircularQueue(3);
	cout<<queue->enQueue(1)<<"\n";
	cout<<queue->enQueue(2)<<"\n";
	cout<<queue->enQueue(3)<<"\n";
	cout<<queue->enQueue(4)<<"\n";
	cout<<queue->isEmpty()<<"\n";
	cout<<queue->isFull()<<"\n";
	return 0;
}
