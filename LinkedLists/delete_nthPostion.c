#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node* next;	
};

struct Node* head;
//Insert node at the end of linked list
void Insert(int data) {
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	if(temp == NULL) {
		printf("Error: Memory is not allocated");

	}
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = temp;
		return;
	}
	struct Node* temp2 = head;
	while(temp2->next != NULL) {
		temp2 = temp2->next;
	}
	temp2->next = temp;
	 
}
//Print linked list
void Print() {
	
	struct Node* temp = head;
	while(temp != NULL) {
		temp = temp->next;
		printf("%d", temp->data);
	}

}

/* 

//Delete node at nth position
void Delete(int n) {

}
*/
int main() {
	head = NULL;
	Insert(2);
	Insert(4);
	Insert(3);
	Insert(6);
	Insert(5);
	Print();
	return 0;
}
