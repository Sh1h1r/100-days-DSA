#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node* next;
}node;

node* create(int value){
	node* new_node = malloc(sizeof(node));
	new_node->next = NULL;
	new_node->data = value;
	return new_node;
}

int main(){
	int length; 
	node* head = NULL;
	node* prev = NULL;
	printf("enter the length of the list:");
	scanf("%d",&length);
	for(int i = 0; i < length; i++){
		int value;
		printf("enter the value of the %d node:",i + 1);
		scanf("%d",&value);
		node* new_node = create(value);
		if(head == NULL){
			head = new_node;
		}
		else{
			prev->next = new_node;
		}
		if(i == length - 1){
			new_node->next = head;
		}
		prev = new_node;
	}

	node* temp = head;
	do {
	    printf("%d ", temp->data);
	    temp = temp->next;
	} while(temp != head);
}
