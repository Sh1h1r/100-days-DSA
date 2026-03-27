#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
	int value;
	struct Node* next;
}node;

node* create(int data){
	node* new_node = malloc(sizeof(node));
	new_node->value = data;
	new_node->next = NULL;
	return new_node;
}

int main(){
	node *head;
	int n;
	node* prev;
	printf("enter the length of the list:");
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		int data;
		printf("enter %d value:", i+ 1);
		scanf("%d",&data);
		node* new_node = create(data);
		if(i == 0)
			head = new_node;
		else prev->next = new_node;
		prev = new_node;
	}
	node* temp = head;
	while(temp != NULL){
		printf("%d->",temp->value);
		temp = temp->next;
	}
	printf("NULL\n");
}
