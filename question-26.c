#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node* next;
	struct Node* prev;
}node;

node* create(int value){
	node* new_node = malloc(sizeof(node));
	new_node->next = NULL;
	new_node->data = value;
	new_node->prev = NULL;
	return new_node;
}

int main(){
	int length;
	node* head = NULL;
	node* prevv = NULL;
	printf("enter the length of the list:");
	scanf("%d",&length);
	for(int i = 0; i < length; i++){
		int value;
		printf("enter the value of the %d element:", i + 1);
		scanf("%d",&value);
		node* new_node = create(value);
		if(head == NULL){
			head = new_node;
			new_node->prev = NULL;
			prevv = new_node;
		}
		else{
			prevv->next = new_node;
			new_node->prev = prevv;
			prevv = new_node;
		}
	}

	node* trav = head;
	while(trav != NULL){
		printf("%d ",trav->data);
		trav = trav->next;
	}
}
