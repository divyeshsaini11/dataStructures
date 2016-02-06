#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node* next;
	
};

struct Node* top;

inline void Push(int x) {
	struct Node* temp = 
		(struct Node*)malloc(sizeof(struct Node*));
	temp->data = x;
	temp->next = top;
	top = temp;

}

inline void Pop() {
	struct Node* temp;
	if(top == NULL) return;
	temp = top;
	top = temp->next;
	free(temp);
}

void Print() {
	struct Node* temp;
	temp = top;
	while(temp != NULL) {
		printf("%d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main() {
	top = NULL; 
	Push(5); Print();
	Push(2); Print();
	Push(3); Print();
	Pop(); Print();
	Push(6); Print();
	Pop(); Print();

	return 0;
}s