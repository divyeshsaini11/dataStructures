#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

inline struct Node* Insert(struct Node** pointerHead, int x) {

	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp -> data = x;
	temp -> next = *pointerHead;
	*pointerHead = temp;

	return *pointerHead;

}
inline void Print(struct Node* head) {
  
	printf("\nList is:");
	while(head != NULL) {
		printf("%d",head -> data);
		head = head -> next;
		
	}
	printf("\n");

}
int main() {
	struct Node* head = NULL;
	int n,i,x;
	//printf("How many numbers\n");
	scanf("%d",&n);
	for (i = 0; i < n; i++)
	{
		//printf("Enter the Number:");
		scanf("%d",&x);
		head = Insert(&head,x);
	}
	Print(head);
	return 0;
}