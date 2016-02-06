#include<iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

Node* head;

inline void Insert(int data, int n) {
	Node* temp1 = new Node();	
	temp1->data = data;
	temp1->next = NULL;
	if(n == 1) {
		temp1->next = head;
		head = temp1;
		return;
	}
	Node* temp2 = head;
	for(int i=0;i<n-2;i++) {
		temp2 = temp2->next;
	}
	
	temp1->next = temp2->next;
	temp2->next = temp1;
}

inline void Print() {
	Node* temp = head;
	printf("List is:");
	while(temp != NULL) {
		printf("%d", temp->data);
		temp = temp->next;		
	}
}

int main() {
	head = NULL;
	Insert(4,1);
	Insert(2,1);
	Insert(5,3);
	Insert(7,4);
	Insert(8,2);
	Print();
	return 0;
} 