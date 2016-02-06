#include<iostream>
#include<stack>


using namespace std;

struct Node{
	int data;
	Node* next;	
};

Node* head;

//Insert node at begining of linked list
inline void Insert(int data) {
	Node* temp = new Node();
	temp->data = data;
	temp->next = head;
	head = temp;

}


void Reverse() {
	stack<struct Node*> S;
	Node* temp = head;
	//Push addresses into stack
	while(temp != NULL) {
		S.push(temp);
		temp = temp->next;
	}
	temp = S.top();
	head = temp;
	S.pop();
	//Loop for changing links
	while(!S.empty()) {
		temp->next = S.top();
		S.pop();
		temp = temp->next;
	}
	temp->next = NULL;
}

inline void Print() {
	Node* temp = head;
	
	while(temp != NULL) {
		cout<<temp->data;
		temp = temp->next;
	}
}

int main() {
	head = NULL;
	Insert(2);
	Insert(4);
	Insert(5);	
	Insert(3);
	Insert(6);
	Insert(7);
	Insert(1);
	Print();
	Reverse();
	cout<<"\n"<<"Reverse String:";
	Print();
	return 0;
} 