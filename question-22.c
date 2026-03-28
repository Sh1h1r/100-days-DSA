#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node* next;
}node;

node* create(int value){
	node* new_node = malloc(sizeof(node));
	new_node->data = value;
	new_node->next = NULL;
	return new_node;
}

int main(){
	int n;
	node* head;
	node* prev;
	printf("enter the number of nodes:");
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		int value;
		printf("enter the value of the %d node:",i + 1);
		scanf("%d",&value);
		node* new_node = create(value);
		if(i == 0){
			head = new_node;
			prev = new_node;
		}
		else prev->next = new_node;
		prev = new_node;
	}
	int count = 0;
	node* temp = head;
	while(temp != NULL){
		count++;
		printf("%d->",temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
	printf("number of nodes:%d",count);
}
