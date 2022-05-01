#include<iostream>

using std::cout;
using std::endl;

template <typename T>
class Linkedlist {
private:
	struct Node
	{
		T mData;
		Node* mNext;
	};
	Node* mHead;
public:
	Linkedlist() { mHead = nullptr; }
	Linkedlist(T data):mHead(new Node{data,nullptr}){}

	void insert(T data){
		Node* temp = mHead;
		while (temp->mNext != nullptr)
		{
			temp = temp->mNext;
		}
		temp->mNext = new Node{ data,nullptr };
	}
	void print() {
		Node* temp = mHead;
		while (temp != nullptr)
		{    
			cout <<"adress:" <<temp<<" data " << temp->mData<<"----->"<<endl;
			temp = temp->mNext;
		}
		cout << temp;
	}
	void cleanprint() {
		Node* temp = mHead;
		while (temp != nullptr)
		{
			cout<< temp->mData<<endl;
			temp = temp->mNext;
		}
	}
	void insertingNodebeginning(T data) {
		Node* prevHead = mHead;
		mHead = new Node{ data,prevHead };
	}
};



int main() {
	/*Linkedlist<int> first(2);
	first.insert( 4);
	first.insert(33);
	first.insert(222);
	first.print();
	cout << endl;*/
	Linkedlist<int> first;
	first.insertingNodebeginning(77);
	first.print();

}
